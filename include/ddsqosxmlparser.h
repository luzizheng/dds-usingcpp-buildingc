#ifndef _DDSQOSXMLPARSER_H_
#define _DDSQOSXMLPARSER_H_

#include "tinyxml2/tinyxml2.h"
#include "ddsqos.h"

using namespace tinyxml2;

// 判断标签是否为default
bool EleIsDefaultVal(const XMLElement *element);

/// @brief 解析xml所有内容，把内容赋值到qos__指向的结构体上
/// @param qos__ qos_ 接收内容的qos结构体指针
/// @param qos_root_element xml的qos标签节点
/// @return 成功返回0
int qosparseAll(c_qos *qos__,const XMLElement *qos_root_element);

/// @brief 解析传输层协议的xml配置
/// @param qos_ 接收内容的qos结构体指针
/// @param transfer_ele xml标签节点
/// @return 成功返回0
int qosparseTransElement(c_qos *qos_,const XMLElement *transfer_ele);

/// @brief 解析DataSharing协议的xml配置
/// @param qos_ 接收内容的qos结构体指针
/// @param ds_ele xml标签节点
/// @return 成功返回0
int qosparseDataSharingElement(c_qos *qos_, const XMLElement *ds_ele);

int qosparseDeadlineElement(c_qos *qos_, const XMLElement *ele);
int qosparseLifeSpanElement(c_qos *qos_, const XMLElement *ele);
int qosparseLivelinessElement(c_qos *qos_, const XMLElement *ele);
int qosparseReliableElement(c_qos *qos_, const XMLElement *ele);
int qosparseReliableWriterElement(c_qos *qos_, const XMLElement *ele);
int qosparseHistoryElement(c_qos *qos_, const XMLElement *ele);
int qosparseDurabilityElement(c_qos *qos_, const XMLElement *ele);
int qosparseflowControllersElement(c_qos *qos_, const XMLElement *ele);
int qosparseresourceLimitsElement(c_qos *qos_, const XMLElement *ele);

#endif // !_DDSQOSXMLPARSER_H_