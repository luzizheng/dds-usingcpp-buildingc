# 高级配置示例

此示例通过允许用户指定实体的属性（如持久性、可靠性）或指定要使用的传输协议等可能性，扩展了普通 HelloWorld 的配置选项。
例如，这对于快速测试两个端点是否兼容并因此是否匹配非常有用。

## 执行指令

要启动此测试，请打开两个不同的控制台:

在第一次启动中：./ddsconfexample publisher（或 AdvancedConfigurationExample.exe Windows 上的Publisher）。

在第二个中：./ddsconfexample subscriber（或 AdvancedConfigurationExample.exe Windows 上的Subscriber）。

## 参数

第一个参数是 `publisher` 或 `subscriber` 然后其余参数被无序读取

```sh
用法: ddsconfexample <publisher|subscriber>

常规参数:
  -h              --help
                    帮助信息.

Publisher 选项:
  -t <topic_name> --topic=<topic_name>
                    Topic 名称 (默认: HelloWorldTopic).
  -d <id>         --domain=<id>
                    DDS 域 ID (默认: 0).
  -w <num>        --wait=<num>
                    发布所需等待的匹配订阅者数 (默认:
                    0 => 不等待).
  -s <num>        --samples=<num>
                    需要发送的样本数量 (默认: 0 => 无限一直发).
  -i <num>        --interval=<num>
                    每发送一个样本间隔时间（毫秒） (默认: 100).
  -a              --async
                    异步(Asynchronous)发布模式 (默认: synchronous).
                  --transport=<shm|udp|udpv6>
                    仅使用共享内存、UDPv4 或 UDPv6 传输.缺省状态下, 使用FastDDS默认传输模式 (根据场景，它将使用最有效的一个: data-sharing
                    delivery mechanism > shared-memory > UDP).
  -o              --ownership
                    在EXCLUSIVE_OWNERSHIP下使用Topic (默认:SHARED_OWNERSHIP).
                  --strength=<num>
                    设置当前Publisher强度。将Topic设置为
                    EXCLUSIVE_OWNERSHIP。(默认：0)

Subscriber 选项:
  -t <topic_name> --topic=<topic_name>
                    Topic 名称 (默认: HelloWorldTopic).
  -d <id>         --domain=<id>
                    DDS 域 ID (Default: 0).
  -s <num>        --samples=<num>
                    需要等待接收的样本数量 (默认: 0 => 无限，一直接收).
                  --transport=<shm|udp|udpv6>
                    仅使用共享内存、UDPv4 或 UDPv6 传输.缺省状态下, 使用FastDDS默认传输模式 (根据场景，它将使用最有效的一个: data-sharing
                    delivery mechanism > shared-memory > UDP).
  -o              --ownership
                    在EXCLUSIVE_OWNERSHIP下使用Topic (默认:SHARED_OWNERSHIP).

QoS 选项:
  -r              --reliable
                    将可靠性设置为reliable (默认：best-effort).
                  --transient
                    将持久性设置为 transient local(瞬态本地) (默认: volatile(易挥发的),
                    不可靠时无效).
  -p <str>        --partitions=<str>
                    要匹配的分区，以“;”分隔. 多个分区需要单引号或双引号. 使用空字符串 （''） 时未使用分区. (默认: '').
  -x <str>        --xml-profile <str>
                    用于配置 DomainParticipant 的配置文件名称。

Discovery options:
                  --ttl
                    设置 IPv4 上的多播发现生存时间或 IPv6 的跃点限制。如果未设置，则使用FastDDS 默认值（1 跃点）。增加它以避免在具有多个路由器的方案中出现发现问题。最大值：255。
```

### XML 配置

使用参数 `--xml-profile <profile_name>` 将使用从 XML 文件加载的配置文件名称配置内部域参与者。要加载 XML 文件，请查看 [FastDDS 文档](https://fast-dds.docs.eprosima.com/en/latest/fastdds/xml_configuration/xml_configuration.html)。加载示例 XML 配置[文件](shm_off.xml)并使用 `--xml-profile no_shm_participant_profile`调用此示例将禁用创建的内部域参与者的共享内存传输。

此代码演示如何在没有共享内存的情况下运行此示例的Publisher：

```sh
# 从执行文件所在的目录
FASTRTPS_DEFAULT_PROFILES_FILE=shm_off.xml ./ddsconfexample publisher --xml-profile no_shm_participant_profile
```
