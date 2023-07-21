# 延迟测试

这个目录提供[测试FastDDS网络延迟](latency-measure)所需的一切。

延迟测试计算意味着至少有两个节点：一个具有发布角色的节点，另一个具有订阅角色的节点。发布节点除了发布固定大小的数据并等待回复外，还负责控制与订阅节点的同步并收集结果。这两个角色都由同一个[utility(实用程序)](#usage)提供，该[utility(实用程序)](#Usage)可以使用FastDDS进行[编译](#编译)。

此外，此目录提供了一个[Python脚本](#python-launcher)，可帮助在同一系统中启动两个节点。

## 延时测量（计算）

测试包括发送样本并等待他们的回复。发布节点将尝试循环发送样本，等待回复并计算此过程中使用的时间。发送指定数量的样本后，发布节点将收集信息，最后展示出来。

延迟测试应用程序能够同时执行具有不同设置的多个测试。可以配置的元素如下：

- Size of the samples（样本的大小）.
- Number of samples to send（要发送的样本数量）.

在执行结束时，[utility(实用程序)](#usage)将显示一个包含测试结果的表格。<br>
下面是这些测试结果的示例。

```
   Bytes, Samples,   stdev,    mean,     min,     50%,     90%,     99%,  99.99%,     max
--------,--------,--------,--------,--------,--------,--------,--------,--------,--------,
      16,   10000,   0.248,   1.279,   1.106,   1.263,   1.358,   2.509,   6.932,   7.261
    1024,   10000,   0.822,   1.678,   1.078,   1.145,   2.399,   2.538,  17.373,  17.862
   64512,   10000,   1.769,   5.641,   4.574,   4.744,   7.574,  12.189,  31.385,  45.567
 1048576,   10000,  20.211,  69.110,  58.913,  62.671,  82.916, 140.723, 447.954, 458.905
```

表的每一行都是具有特定设置的执行。
这些列显示下一个信息：

* Bytes -- 测试中使用的样本的大小
* Demand -- 测试中发送的样本数
* stdev -- 标准差
* mean -- 平均延迟时间（以微秒为单位）
* min -- 最小延迟时间（以微秒为单位）
* 50% -- 所有延迟的 50% 中的等待时间
* 90% -- 所有延迟的 90% 中的等待时间
* 99% -- 所有延迟的 99% 中的等待时间
* 99.99% -- 所有延迟的 99.99% 中的等待时间
* max -- 最大延迟时间（以微秒为单位）


## 编译

可以使用 CMake 选项`PERFORMANCE_TESTS`启用此[utility(实用程序)](#usage)。按照[*从源代码安装FastDDS*指南](https://fast-dds.docs.eprosima.com/en/latest/installation/sources/sources_linux.html)，可以执行下一个命令编译快速 DDS 和此[utility(实用程序)](#usage)。

```
colcon build --cmake-args -DPERFORMANCE_TESTS=ON
```

延迟测试可执行文件可以在`build`目录中找到。

```
build/fastrtps/test/performance/latency
├── CMakeFiles
├── cmake_install.cmake
├── CTestTestfile.cmake
├── Makefile
├── LatencyTest  <=== Latency test utility
└── xml
```

## Usage

该实用程序能够具有发布角色或订阅角色。此外，它还能够同时具有这两个角色，可用于测试特殊的FastDDS机制，例如*进程内通信*

```bash
# 运行一个发布节点
$ LatencyTest publisher

# 运行一个订阅节点
$ LatencyTest subscriber

# 运行一个拥有发布/订阅功能的节点
$ LatencyTest both
```

该实用程序提供几个选项：

**常规选项**

| 选项                              | 描述                                                                                                                                |
| -                                   | -                                                                                                                                          |
| --reliability=[reliable/besteffort] | 设置 DDS 实体的可靠性 QoS                                                                                                  |
| --samples=<number>                  | 测试中发送的样本数。默认值为*10000 个样本*                                                                             |
| --domain \<domain_id>               | 设置要使用的 DDS 域。默认域是随机域。如果在单独的进程中进行测试，请始终使用此参数设置域 |
| --file=<file>                       | 读取payload demand(有效负载需求)的文件。                                                                                                          |
| --data_sharing=[on/off]             | 显式启用/禁用数据共享功能。FastDDS 默认值为*auto*                                                                 |
| --data_load                         | 启用Data Loan功能                                                                                                      |
| --shared_memory                     | 显式启用/禁用SHM(共享内存传输)。FastDDS 默认值是*on*                                                                |
| --security=[true/false]             | 启用/禁用 DDS security(安全性)                                                                                                                |
| --certs=\<directory>                | 包含证书的目录。当security为 enable时使用                                                                              |


**发布选项**

| 选项                          | 描述                                                                      |
| -                               | -                                                                                |
| --subscribers=\<number>         | 测试中的订阅者数。默认值为 *1*                              |

**订阅选项**

| 选项                          | 描述                                                                      |
| -                               | -                                                                                |
| --echo[true/false]              | 启用/禁用echo(回声模式)。默认值为 *true*                                      |


需求文件具有要使用的所有数据大小的格式，由`;`分隔。
```
16;32;64
```

This examples will execute three tests: one testing latency for samples of 16 bytes, other testing latency for samples
of 32 bytes the last one testing latency for samples of 64 bytes.
此示例将执行三个测试：<br>
1. 测试延迟的 16 字节的样本
2. 测试延迟的 32 字节的样本
3. 测试延迟的 64 字节的样本


### Examples

**使用 UDP 传输测试best effort(最大努力)通信的延迟**

使用以下设置:

- Size of each sample: 2 Mb
- Size of each burst: 100 samples
- Recovery time: 90 milliseconds
- Test time: 10 seconds

具有要求的 CSV 文件将包含此内容: `2097152``

```bash
# 发布节点
$ LatenchTest publisher --reliability=besteffort --domain 0 --shared_memory=off --file=demands.csv

# 订阅节点
$ LatenchTest subscriber --reliability=besteffort --domain 0 --shared_memory=off --file=demands.csv
```

## Python launcher

该目录还附带一个 Python 脚本，该脚本可自动执行测试节点。

```batch
# 指派实用程序可执行文件的位置
export LATENCY_TEST_BIN=build/fastrtps/test/performance/latency/LatencyTest

# 调用 python 脚本来运行测试。
python3 src/fastrtps/test/performance/latency/latency_tests.py
```

python脚本提供了几个选项:

| 选项                              | 描述                                                                                                                                |
| -                                   | -                                                                                                                                          |
| --reliability                       | 将 DDS 实体的可靠性 QoS 设置为reliable(可靠)。默认可靠性是best-effort(尽力而为)                                                |
| --data_loans                        | 启用loan示例 API 的使用。默认值为禁用                                                                                  |
| --shared_memory [on/off]            | 显式启用/禁用shm(共享内存传输)。Fast DDS 默认值是*on*                                                               |
| --interprocess                      | 发布器和订阅器位于不同的进程中。默认值在示例进程中和使用进程内通信                |
| --security                          | Enable security. Default disable                                                                                                           |
| -n \<number>                        | 测试中发送的样本数量，默认为*10000个样本*
| -f \<file>                          | 包含demands(需求)的文件                                                                                                              |
