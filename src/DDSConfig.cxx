#include "DDSConfig.h"
#include <iostream>
#include <tinyxml2/tinyxml2.h>
#include <string.h>
#include <vector>
#include <sstream>
#include "string_caculate.h"

using namespace tinyxml2;
using namespace std;


/*读取xml内容*/
DDSConfig::DDSConfig()
{
    XMLDocument doc;
    XMLError err = doc.LoadFile("../ServerClient/test_config/test_conf.xml"); // 相对与执行文件的路径
    if (err != XML_SUCCESS)
    {
        cout << "config.xml测试配置文件加载失败!" << endl;
        loaddefconfig();
    }
    else
    {
        XMLElement *testconfEle = doc.FirstChildElement("testconf");
        // XMLElement *programEle = doc.FirstChildElement("program_conf");
        XMLElement *concurrency_el = testconfEle->FirstChildElement("concurrency");
        const char *concurrency_ch = concurrency_el->GetText();
        if (strcmp(concurrency_ch, "1") == 0)
        {
            m_concurrency = true;
        }
        else
        {
            m_concurrency = false;
        }

        XMLElement *payloadsizeEle = testconfEle->FirstChildElement("payload_size");
        const char *payloadsizeCh = payloadsizeEle->GetText();
        string payloadSizeStr = string(payloadsizeCh);
        m_payload_size = evaluate_exp(payloadSizeStr);

        XMLElement *sampleEle = testconfEle->FirstChildElement("samples");
        const char *sampleCh = sampleEle->GetText();
        m_samples = atoi(sampleCh);

        XMLElement *sleepEle = testconfEle->FirstChildElement("sleep");
        const char *sleepCh = sleepEle->GetText();
        m_sleep = atoi(sleepCh);

        

        cout << "config.xml加载成功" << endl;

    }
    reportInitialization();
}
void DDSConfig::reportInitialization()
{
}

DDSConfig::~DDSConfig()
{
    cout << "DDSConfig释放" << endl;
}

/*加载默认值*/
void DDSConfig::loaddefconfig()
{
    m_payload_size = 500;
    m_samples = 0;
    m_sleep = 250;
    m_concurrency = false;
}

