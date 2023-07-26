#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ddsc.h"
#include <signal.h>
#include <pthread.h>
#include "ddsexampleoptparse.h"

static dds_fd dds;

int listenThreadFlag = 0;

void sigint_handle(int sig)
{
    if (sig == SIGINT)
    {
        listenThreadFlag = 1;
        dds_close(dds);
    }
}

/// @brief 回调
void recvcallback(void *pdata, uint32_t datalen)
{
    char *str = (char *)malloc(datalen + 1);
    memcpy(str, pdata, datalen);
    str[datalen] = '\0';
    printf("接收到数据:%s\n", str);
    free(str);
}

struct ThreadArg
{
    uint32_t samples;
    double interval_u;
    char topic[10];
    char message[50];
};

// ‘send’ 操作
void *runSendThread(void *arg)
{
    struct ThreadArg *targs = (struct ThreadArg *)arg;
    if (targs == NULL)
    {
        printf("error:OptionsArgs is null\n");
        pthread_exit(NULL);
    }
    // const char *message = "abcdefg";
    // void *p = (void *)message;
    char *msg = malloc(strlen(targs->message) + 1);
    strcpy(msg, targs->message);

    uint32_t remain_samples = targs->samples;
    while (1)
    {
        DDS_MSGCODE code = dds_send(dds, targs->topic, msg, strlen(msg), true);
        if (code != DDS_MSG_SUCCESS)
        {
            break;
        }
    }
    free(msg);
    pthread_exit(NULL);
}

void *listenThread(void *arg)
{
    struct ThreadArg *targs = (struct ThreadArg *)arg;
    if (dds_revcDataCallback(dds, targs->topic, recvcallback) != 0)
    {
        return NULL;
    }

    while (listenThreadFlag != 1)
    {
        sleep(1);
        if (listenThreadFlag != 0)
        {
            break;
        }
    }
    pthread_exit(NULL);
}

void *readThread(void *arg)
{
    struct ThreadArg *targs = (struct ThreadArg *)arg;
    void *pdata;
    uint32_t dataLen = 0;
    if (dds_read(dds, targs->topic, 5, &pdata, &dataLen) == DDS_MSG_SUCCESS)
    {
        char *recvMsg = (char *)pdata;
        printf("接收到数据:");
        for (int i = 0; i < dataLen; i++)
        {
            printf("%c", recvMsg[i]);
        }
        putchar('\n');
        free(recvMsg);
    }
    else
    {
        printf("dds_read方法error");
    }
    pthread_exit(NULL);
}

int main(int argc, char **argv)
{

    struct OptionsArgs oa = {dundefault, INT32_MAX, 1000000, {}, 1, "hello dds"};
    int res = parseMainOptions(&oa, argc, argv);
    if (res != 0)
    {
        return res;
    }

    printf("samples = %d\n", oa.samples);

    signal(SIGINT, sigint_handle);

    // create dds node
    dds = dds_create(dds_qos_createDefaultQoS(), DDS_DEFAULT, NULL);

    // bind topic

    printf("topic count = %d\n", oa.topic_count);
    for (int i = 0; i < oa.topic_count; i++)
    {
        printf("bind topic : %s\n", oa.topics[i]);
        dds_bindTopic(dds, oa.topics[i]);
    }

    if (oa.operation == dsend)
    {
        // 遍历所有topic，启动相应数量的线程（1个topic 1条线程）
        for (int i = 0; i < oa.topic_count; i++)
        {
            struct ThreadArg ta;
            strcpy(ta.topic, oa.topics[i]);
            strcpy(ta.message, oa.message);
            ta.interval_u = oa.interval_u;
            ta.samples = oa.samples;
            pthread_t tid;
#ifdef __cplusplus
            int ret = pthread_create(&tid, NULL, runSendThread, (void *)&ta);
#else
            int ret = pthread_create(&tid, NULL, (void *)runSendThread, (void *)&ta);
#endif

            if (ret)
            {
                printf("创建send线程失败\n");
                exit(-1);
            }
            pthread_join(tid, NULL);
        }
    }
    else if (oa.operation == dlisten)
    {

        for (int i = 0; i < oa.topic_count; i++)
        {
            struct ThreadArg ta;
            strcpy(ta.topic, oa.topics[i]);
            strcpy(ta.message, oa.message);
            ta.interval_u = oa.interval_u;
            ta.samples = oa.samples;
            pthread_t tid;

#ifdef __cplusplus
            int ret = pthread_create(&tid, NULL, listenThread, (void *)&ta);
#else
            int ret = pthread_create(&tid, NULL, (void *)listenThread, (void *)&ta);
#endif

            if (ret)
            {
                printf("创建listen线程失败\n");
                exit(-1);
            }
            pthread_join(tid, NULL);
        }
    }
    else if (oa.operation == dread)
    {
        for (int i = 0; i < oa.topic_count; i++)
        {
            struct ThreadArg ta;
            strcpy(ta.topic, oa.topics[i]);
            strcpy(ta.message, oa.message);
            ta.interval_u = oa.interval_u;
            ta.samples = oa.samples;
            pthread_t tid;
#ifdef __cplusplus
            int ret = pthread_create(&tid, NULL, readThread, (void *)&ta);
#else
            int ret = pthread_create(&tid, NULL, (void *)readThread, (void *)&ta);
#endif

            if (ret)
            {
                printf("创建read线程失败\n");
                exit(-1);
            }
            pthread_join(tid, NULL);
        }
    }
    else if (oa.operation == dboth)
    {
        for (int i = 0; i < oa.topic_count; i++)
        {
            struct ThreadArg ta;
            strcpy(ta.topic, oa.topics[i]);
            strcpy(ta.message, oa.message);
            ta.interval_u = oa.interval_u;
            ta.samples = oa.samples;

            pthread_t sendtid;
            pthread_t listentid;
#ifdef __cplusplus
            pthread_create(&sendtid, NULL, runSendThread, (void *)&ta);
            pthread_create(&listentid, NULL, listenThread, (void *)&ta);
#else
            pthread_create(&sendtid, NULL, (void *)runSendThread, (void *)&ta);
            pthread_create(&listentid, NULL, (void *)listenThread, (void *)&ta);
#endif
            pthread_join(sendtid, NULL);
            pthread_join(listentid, NULL);
        }
    }
    else
    {
        printf("error operation option\n");
    }

    // dds_close(dds);
    return 0;
}