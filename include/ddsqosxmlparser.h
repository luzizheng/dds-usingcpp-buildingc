#ifndef _DDSQOSXMLPARSER_H_
#define _DDSQOSXMLPARSER_H_

#include "tinyxml2/tinyxml2.h"
#include "ddsqos.h"

using namespace tinyxml2;

int qosparseTransElement(c_qos *qos_,const XMLElement *transfer_ele);






#endif // !_DDSQOSXMLPARSER_H_