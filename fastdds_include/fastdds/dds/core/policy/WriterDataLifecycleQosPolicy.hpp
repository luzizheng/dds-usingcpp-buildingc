

/**
 * @file WriterDataLifecycleQosPolicy.hpp
 */

#ifndef _FASTDDS_WRITERDATALIFECYCLEQOSPOLICY_HPP_
#define _FASTDDS_WRITERDATALIFECYCLEQOSPOLICY_HPP_

namespace eprosima {
namespace fastdds {
namespace dds {

//! @brief Specifies the behavior of the DataWriter with regards to the lifecycle of the data-instances it manages.
//! @warning This Qos Policy will be implemented in future releases.
//! @note Mutable Qos Policy
class WriterDataLifecycleQosPolicy
{
public:

    /**
     * @brief Constructor
     */
    WriterDataLifecycleQosPolicy()
        : autodispose_unregistered_instances(true)
    {
    }

    /**
     * @brief Destructor
     */
    virtual RTPS_DllAPI ~WriterDataLifecycleQosPolicy()
    {
    }

    bool operator ==(
            const WriterDataLifecycleQosPolicy& b) const
    {
        return (this->autodispose_unregistered_instances == b.autodispose_unregistered_instances);
    }

public:

    /**
     * @brief Controls whether a DataWriter will automatically dispose instances each time they are unregistered.
     * The setting autodispose_unregistered_instances = TRUE indicates that unregistered instances will also be considered
     * disposed. <br>
     * By default, true.
     */
    bool autodispose_unregistered_instances;

};

} //namespace dds
} //namespace fastdds
} //namespace eprosima

#endif // _FASTDDS_WRITERDATALIFECYCLEQOSPOLICY_HPP_
