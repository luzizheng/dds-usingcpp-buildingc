
#ifndef _DDSCONFIG_
#define _DDSCONFIG_

#include <string>
#include <stdint.h>
#include <stddef.h>
#include <vector>

class DDSConfig
{
public:

	/// @brief 数据包大小（bytes）
	size_t m_payload_size;

	/// @brief 测试时发送样本数，0为一直发送
	uint32_t m_samples;

	/// @brief 发送时间间隔(ms)
	uint32_t m_sleep;

	/// @brief 是否是并发，true:非并发， false:并发
	bool m_concurrency;

	/// @brief 默认加载xml文件配置
	DDSConfig();
	~DDSConfig();

	/// @brief 加载默认配置
	void loaddefconfig();

	/// @brief 打印信息
	std::string getTransModeDescription();

private:
	void reportInitialization();
};

typedef struct DDSTestReport_
{
	uint32_t executeCounts;
	double latency;
	double throughput;
} DDSTestReport;

#endif