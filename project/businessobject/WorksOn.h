#ifndef _businessobject_WorksOn_h_
#define _businessobject_WorksOn_h_
#include <string>
#include "BaseObject.h"
#include "../libs/json.hpp"

using json = nlohmann::json;
using namespace std;

class WorksOn:public BaseObject
{
private:
    long ESSN;
    int PNO, Id;
    float Hours; 
public:
    WorksOn();
    WorksOn(int id, long essn, int pno, float hours);
    WorksOn(long essn, int pno, float hours);
    void SetId(int id);
    int GetId();
    void SetSubId();
    void SetESSN(long essn);
    long GetESSN();
    void SetPNO(int pno);
    int GetPNO();
    void SetHours(int hours);
    int GetHours();
    string ConvertToString();
    json ToJson();
};
#endif