# 吞吐量测试

这个目录提供[测试Fast DDS 网络吞吐量](#throughput-measure)所需的一切。

吞吐量度量意味着至少有两个节点：一个是具有发布功能的角色，另一个是具有订阅功能的角色。发布节点除了以自定义频率发布固定大小的数据外，还负责控制与订阅节点的同步并收集结果。这两个角色都由同一个[utility(实用程序)](#Usage)提供，该[utility(实用程序)](#Usage)可以使用Fast DDS 进行[编译](#编译)。

此外，这个目录提供了一个 [Python 脚本](#python-launcher) ，可帮助在同一系统中启动两个节点。

## 吞吐量度量（计算）

该测试包括在一段时间内发送尽可能多的样本突发，由修复*恢复*时间隔开。当测试不超过测试时间时，发布节点将尝试循环发送 `n` 个样本的突发并在*恢复*时间内休眠。测试超过测试时间后，发布节点会收集订阅节点的所有信息，最后展示给你看。

吞吐量测试应用程序能够同时执行具有不同设置的多个测试。可以配置的元素如下：

- 样本的大小.
- 每个突发的样本数.
- 恢复时间 -- 发送样本突发和下一次样本之间的每次中断时间.
- 测试时间 -- 吞吐量测试必须运行的最长时间.

在执行结束时，[utility(实用程序)](#Usage)将显示一个包含测试结果的表格。下面是这些测试结果的示例。

```
[            TEST           ][                    PUBLISHER                      ][                            SUBSCRIBER                        ]
[ Bytes,Demand,Recovery Time][Sent Samples,Send Time(us),   Packs/sec,  MBits/sec][Rec Samples,Lost Samples,Rec Time(us),   Packs/sec,  MBits/sec]
[------,------,-------------][------------,-------------,------------,-----------][-----------,------------,------------,------------,-----------]
   1024, 10000,            5,       410000,      1015633,  403689.138,   3307.021,      410000,           0,     1022114,  401129.377,   3286.052
```

表的每一行都是具有特定设置的执行。
这些列显示下一个信息：

* Bytes -- 测试中使用的样本的大小.
* Demand -- 每次突发中的样本数.
* Recovery Time -- 发送一连串样本和下一个样本之间的中断时间（以毫秒为单位）.
* Sent Samples -- 发布节点能够发送的样本总数.
* Send time (us) -- 发布节点运行测试的总时间.
* Packs/sec -- 发布端的采样率.
* MBits/sec -- 发布端的吞吐量度量.
* Rec Samples -- 订阅节点接收的样本数.
* Lost Samples -- 测试期间丢失的样本数量.
* Rec time(us) -- 订阅运行测试的总时间.
* Packs/sec -- 订阅端的采样率.
* MBits/sec -- 订阅端的吞吐量度量.


## 编译

 可以使用 CMake 选项`PERFORMANCE_TESTS`启用此实用程序。按照从[*源代码安装FastDDS*指南](https://fast-dds.docs.eprosima.com/en/latest/installation/sources/sources_linux.html)，可以编译 Fast-DDS 和此实用程序，执行下一个命令。

```
colcon build --cmake-args -DPERFORMANCE_TESTS=ON
```

吞吐量测试可执行文件可以在`build`目录中找到。

```
build/fastrtps/test/performance/throughput
├── CMakeFiles
├── cmake_install.cmake
├── CTestTestfile.cmake
├── Makefile
├── ThroughputTest  <=== Throughput test utility
└── xml
```

## Usage

该实用程序能够具有`发布角色`或`订阅角色`。此外，它还能够同时具有这两个角色，可用于测试特殊的FastDDS机制，例如*进程内通信*

```bash
# 运行一个发布节点
$ ThroughputTest publisher

# 运行一个订阅节点
$ ThroughputTest subscriber

# 运行一个同时拥有发布者角色和订阅者角色的节点
$ ThroughputTest both
```

该实用程序提供多种选择:

**常规选项**

| 选项                              | 描述                                                                                                                                |
| -                                   | -                                                                                                                                          |
| --reliability=[reliable/besteffort] | 设置 DDS 实体的可靠性 QoS                                                                                                  |
| --domain \<domain_id>               | 设置要使用的 DDS 域。默认域是随机域。如果在单独的进程中进行测试，请始终使用此参数设置域 |
| --data_sharing=[on/off]             | 显式启用/禁用数据共享(Data Sharing)功能。快速 DDS 默认值为*auto*                                                                 |
| --data_load                         | 是否启用Data Loans 功能                                                                                                      |
| --shared_memory                     | 显式启用/禁用共享内存传输（SHM）。Fast DDS 默认值是*on*                                                               |
| --security=[true/false]             | Enable/disable DDS security（安全性）                                                                                                                |
| --certs=\<directory>                | 包含证书的目录。当security为 enable时使用                                                                              |


**发布选项**

| Option                          | Description                                                                      |
| -                               | -                                                                                |
| --subscribers=\<number>         | 测试中的订阅者(Subscriber)数。默认值为 *1*                              |
| --time=\<seconds>               | 测试必须运行的时间。默认值为*5 秒*                           |
| --recovery_time=\<milliseconds> | 发送突发和下一个突发之间的休息时间。默认值为 *5 毫秒* |
| --demand=\<number>              | 每个突发中发送的样本数。默认值为*10000*                         |
| --msg_size=\<bytes>             | 每个示例的大小（以字节为单位）。默认值为 *1024 bytes*                            |

**批量测试选项**

这些选项用于执行具有不同设置的一批测试。

| 选项                         | 描述                                                                        |
| -                              | -                                                                                  |
| --recoveries_file=\<file>      | 包含恢复时间的 CSV 文件                                                |
| --file=\<file>                 | 包含不同需求(demands)的文件                                              |

恢复时间的 CSV 具有所有恢复时间的格式，用 `;`分隔。

```
5;10
```

此示例将执行两个测试，一个测试的恢复时间为 5 毫秒，另一个恢复时间为 10 毫秒。

包含需求的文件具有每行的格式，数据大小用`;`分隔所有需求。
```
16;100;1000
32;100;1000
```

此示例将执行四个测试：<br>
1. 发送 100 个 16 字节样本的突发<br>
2. 测试发送 1000 个 16 字节样本的突发<br>
3. 发送 100 个 32 字节样本的突发<br>
4. 发送 1000 个 32 字节样本的突发<br>


### Examples

**使用 UDP 传输测试最大努力通信的吞吐量**

使用以下设置:

- Size of each sample: 2 Mb
- Size of each burst: 100 samples
- Recovery time: 90 milliseconds
- Test time: 10 seconds

```bash
# 发布节点
$ ThroughtputTest publisher --reliability=besteffort --domain 0 --shared_memory=off --time=10 --recovery_time=90 --demand=100 --msg_size=2097152

# 订阅节点
$ ThroughtputTest subscriber --reliability=besteffort --domain 0 --shared_memory=off
```

## Python launcher

该目录还附带一个 Python 脚本，该脚本可自动执行测试节点。

```batch
# 指示实用程序可执行文件的位置
export THROUGHPUT_TEST_BIN=build/fastrtps/test/performance/throughtput/ThroughputTest

# 调用 python 脚本来运行测试。
python3 src/fastrtps/test/performance/throughput/throughput_tests.py
```

python脚本提供了几个选项：

| 选项                              | 麦描述                                                                                                                                |
| -                                   | -                                                                                                                                          |
| --reliability                       | 将 DDS 实体的可靠性 QoS 设置为reliable（可靠）。默认可靠性是best-effort（尽力而为）                                                |
| --data_loans                        | 启用loan示例 API 的使用。默认值为禁用                                                                                  |
| --shared_memory [on/off]            | 显式启用/禁用shm(共享内存传输)。Fast DDS 默认值是*on*                                                                |
| --interprocess                      | 发布器和订阅器位于不同的进程中。默认值在示例进程中和使用进程内通信                |
| --security                          | Enable security. Default disable                                                                                                           |
| -t \<seconds>                       | 测试时间（以秒为单位）。默认值为*1 秒*                                                                                                |
| -r \<file>                          | 包含恢复时间的 CSV 文件                                                                                                              |
| -f \<file>                          | 	包含demands(需求)的文件                                                                                                             |
