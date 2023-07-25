
//
#ifndef DBQUEUE_H
#define DBQUEUE_H

#include <queue>
#include <mutex>
#include <memory>
#include <condition_variable>

namespace eprosima {
namespace fastrtps {

/**
 * Double buffered, threadsafe queue for MPSC (multi-producer, single-consumer) comms.
 */
template<class T>
class DBQueue
{

public:

    DBQueue()
        : mForegroundQueue(&mQueueAlpha)
        , mBackgroundQueue(&mQueueBeta)
    {
    }

    //! Clears foreground queue and swaps queues.
    void Swap()
    {
        std::unique_lock<std::mutex> fgGuard(mForegroundMutex);
        std::unique_lock<std::mutex> bgGuard(mBackgroundMutex);

        // Clear the foreground queue.
        std::queue<T>().swap(*mForegroundQueue);

        auto* swap       = mBackgroundQueue;
        mBackgroundQueue = mForegroundQueue;
        mForegroundQueue = swap;
    }

    //! Pushes to the background queue. Copy constructor.
    void Push(
            const T& item)
    {
        std::unique_lock<std::mutex> guard(mBackgroundMutex);
        mBackgroundQueue->push(item);
    }

    //! Pushes to the background queue. Move constructor.
    void Push(
            T&& item)
    {
        std::unique_lock<std::mutex> guard(mBackgroundMutex);
        mBackgroundQueue->push(std::move(item));
    }

    //! Returns a reference to the front element
    //! in the foregrund queue.
    T& Front()
    {
        std::unique_lock<std::mutex> guard(mForegroundMutex);
        return mForegroundQueue->front();
    }

    const T& Front() const
    {
        std::unique_lock<std::mutex> guard(mForegroundMutex);
        return mForegroundQueue->front();
    }

    //! Pops from the foreground queue.
    void Pop()
    {
        std::unique_lock<std::mutex> guard(mForegroundMutex);
        mForegroundQueue->pop();
    }

    //! Return the front element in the foreground queue by moving it and erase it from the queue.
    T FrontAndPop()
    {
        std::unique_lock<std::mutex> guard(mForegroundMutex);

        // Get value by moving the internal queue reference to a new value
        T value = std::move(mForegroundQueue->front());
        // At this point mForegroundQueue contains a non valid element, but mutex is taken and next instruction erase it

        // Pop value from queue
        mForegroundQueue->pop();

        // Return value (as it has been created in this scope, it will not be copied but moved or directly forwarded)
        return value;
    }

    //! Reports whether the foreground queue is empty.
    bool Empty() const
    {
        std::unique_lock<std::mutex> guard(mForegroundMutex);
        return mForegroundQueue->empty();
    }

    //! Reports whether the both queues are empty.
    bool BothEmpty() const
    {
        std::unique_lock<std::mutex> guard(mForegroundMutex);
        std::unique_lock<std::mutex> bgGuard(mBackgroundMutex);
        return mForegroundQueue->empty() && mBackgroundQueue->empty();
    }

    //! Reports the size of the foreground queue.
    size_t Size() const
    {
        std::unique_lock<std::mutex> guard(mForegroundMutex);
        return mForegroundQueue->size();
    }

    //! Clears foreground and background.
    void Clear()
    {
        std::unique_lock<std::mutex> fgGuard(mForegroundMutex);
        std::unique_lock<std::mutex> bgGuard(mBackgroundMutex);
        std::queue<T>().swap(*mForegroundQueue);
        std::queue<T>().swap(*mBackgroundQueue);
    }

private:

    // Underlying queues
    std::queue<T> mQueueAlpha;
    std::queue<T> mQueueBeta;

    // Front and background queue references (double buffering)
    std::queue<T>* mForegroundQueue;
    std::queue<T>* mBackgroundQueue;

    mutable std::mutex mForegroundMutex;
    mutable std::mutex mBackgroundMutex;
};


} // namespace fastrtps
} // namespace eprosima

#endif // ifndef DBQUEUE_H
