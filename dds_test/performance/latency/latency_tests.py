import argparse
import os
import subprocess

if __name__ == '__main__':
    parser = argparse.ArgumentParser(
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )
    parser.add_argument(
        '-x',
        '--xml_file',
        help='Fast-RTPS XML 配置文件',
        required=False
    )
    parser.add_argument(
        '-f',
        '--demands_file',
        help='需求配置文件的文件名',
        required=False,
        default=None
    )
    parser.add_argument(
        '-n',
        '--number_of_samples',
        help='要对每个有效负载进行的测量次数',
        required=False,
        default='10000'
    )
    parser.add_argument(
        '-s',
        '--security',
        action='store_true',
        help='启用安全性组件 (默认: 不启用)',
        required=False
    )
    parser.add_argument(
        '-i',
        '--interprocess',
        action='store_true',
        help='Publisher和Subsriber位于不同的进程中. 默认:False',
        required=False
    )
    parser.add_argument(
        '-d',
        '--data_sharing',
        choices=['on', 'off'],
        help='显式 启用/禁用 data sharing. (默认: Fast-DDS 的默认配置)',
        required=False
    )
    parser.add_argument(
        '-l',
        '--data_loans',
        action='store_true',
        help='启用可以使用loan的简单API (默认: disable)',
        required=False
    )
    parser.add_argument(
        '-r',
        '--reliability',
        action='store_true',
        help='以RELIABLE的可靠性运行 (Defaults: disable)',
        required=False
    )
    parser.add_argument(
        '--shared_memory',
        choices=['on', 'off'],
        help='显式 启用/禁用 共享内存传输. (默认: Fast-DDS 的默认配置)',
        required=False
        )

    # 解析参数
    args = parser.parse_args()
    xml_file = args.xml_file
    security = args.security
    interprocess = args.interprocess

    if security and not interprocess:
        print('进程内通信不支持启用安全性')
        exit(1)  # 错误退出

    # 检查样本数是否为正数
    if str.isdigit(args.number_of_samples) and int(args.number_of_samples) > 0:
        samples = str(args.number_of_samples)
    else:
        print(
            '"number_of_samples" 必须是正数, NOT {}'.format(
                args.number_of_samples
            )
        )
        exit(1)  # 错误退出

    # Demands files options
    demands_options = []
    if args.demands_file:
        if not os.path.isfile(args.demands_file):
            print('需求文件 "{}" 不是一个文件'.format(args.demands_file))
            exit(1)  # 错误退出
        else:
            demands_options = [
                '--file',
                args.demands_file,
            ]

    # XML options
    filename_options = 'default'
    xml_options = []
    if xml_file:
        if not os.path.isfile(xml_file):
            print('XML文件 "{}" 不是一个文件'.format(xml_file))
            exit(1)  # 错误退出
        else:
            xml_options = ['--xml', xml_file]
            # Get QoS from XML
            filename_options = xml_file.split('/')[-1].split('\\')[-1]
            filename_options = filename_options.split('.')[-2].split('_')[1:]
            filename_options = '_'.join(filename_options)

    # Data sharing and loans options
    # modify output file names
    if args.data_sharing and 'on' == args.data_sharing and args.data_loans:
        filename_options += '_data_loans_and_sharing'
    elif args.data_sharing and 'on' == args.data_sharing:
        filename_options += '_data_sharing'
    elif args.data_loans:
        filename_options += '_data_loans'

    # add flags to the command line
    data_options = []

    if args.data_sharing:
        if 'on' == args.data_sharing:
            data_options += ['--data_sharing=on']
        else:
            data_options += ['--data_sharing=off']

    if args.data_loans:
        data_options += ['--data_loans']

    reliability_options = []
    if args.reliability:
        reliability_options = ['--reliability=reliable']
    else:
        reliability_options = ['--reliability=besteffort']

    if args.shared_memory:
        if 'on' == args.shared_memory:
            data_options += ['--shared_memory=on']
        else:
            data_options += ['--shared_memory=off']

    # Environment variables
    executable = os.environ.get('LATENCY_TEST_BIN')
    certs_path = os.environ.get('CERTS_PATH')

    # Check that executable exists
    if executable:
        if not os.path.isfile(executable):
            print('LATENCY_TEST_BIN 没有指定一个文件')
            exit(1)  # 错误退出
    else:
        print('LATENCY_TEST_BIN 未设置')
        exit(1)  # 错误退出

    # Security
    security_options = []
    if security is True:
        if certs_path:
            if os.path.isdir(certs_path):
                security_options = ['--security=true', '--certs=' + certs_path]
            else:
                print('CERTS_PATH 没有指定一个目录')
                exit(1)  # 错误退出
        else:
            print('找不到 CERTS_PATH 的环境变量')
            exit(1)  # 错误退出

    # Domain
    domain = str(os.getpid() % 230)
    domain_options = ['--domain', domain]

    if interprocess is True:
        # Base of test command for publisher agent
        pub_command = [
            executable,
            'publisher',
            '--samples',
            samples,
            '--export_raw_data',
        ]
        # Base of test command for subscriber agent
        sub_command = [
            executable,
            'subscriber',
        ]

        # Manage security
        if security is True:
            pub_command.append(
                './measurements_interprocess_{}_security.csv'.format(
                    filename_options
                )
            )
            pub_command += security_options
            sub_command += security_options
        else:
            pub_command.append(
                './measurements_interprocess_{}.csv'.format(
                    filename_options
                )
            )

        pub_command += domain_options
        pub_command += xml_options
        pub_command += demands_options
        pub_command += data_options
        pub_command += reliability_options

        sub_command += domain_options
        sub_command += xml_options
        sub_command += demands_options
        sub_command += data_options
        sub_command += reliability_options

        print('Publisher command: {}'.format(
            ' '.join(element for element in pub_command)),
            flush=True
        )
        print('Subscriber command: {}'.format(
            ' '.join(element for element in sub_command)),
            flush=True
        )

        # Spawn processes
        publisher = subprocess.Popen(pub_command)
        subscriber = subprocess.Popen(sub_command)
        # Wait until finish
        subscriber.communicate()
        publisher.communicate()

        if subscriber.returncode != 0:
            exit(subscriber.returncode)
        elif publisher.returncode != 0:
            exit(publisher.returncode)
    else:
        # Base of test command to execute
        command = [
            executable,
            'both',
            '--samples',
            samples,
            '--export_raw_data',
        ]

        # Manage security
        if security is True:
            command.append(
                './measurements_intraprocess_{}_security.csv'.format(
                    filename_options
                )
            )
            command += security_options
        else:
            command.append(
                './measurements_intraprocess_{}.csv'.format(
                    filename_options
                )
            )

        command += domain_options
        command += xml_options
        command += demands_options
        command += data_options
        command += reliability_options

        print('Executable command: {}'.format(
            ' '.join(element for element in command)),
            flush=True
        )

        # Spawn process
        both = subprocess.Popen(command)
        # Wait until finish
        both.communicate()
        exit(both.returncode)
    exit(0)
