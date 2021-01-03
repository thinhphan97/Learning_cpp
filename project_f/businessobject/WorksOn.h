#ifndef Project_businessobject_WorksOn_h_
#define Project_businessobject_WorksOn_h_
#include <string>
#include "BaseObject.h"
#include "../libs/json.hpp"

using json = nlohmann::json;
using namespace std;

class WorksOn:public BaseObject
{
private:
    int ESSN, PNO, Id;
    float Hours; 
public:
    Workson();
    Workson(int id, int essn, int pno, int hours);
    Workson(int essn, int pno, int hours);
    void SetId(int id);
    int GetId();
    void SetSubId();
    void SetESSN(int essn);
    int GetESSN();
    void SetPNO(int pno);
    int GetPNO();
    void SetHours(int hours);
    int GetHours();
    string ConvertToString();
    json ToJson();
};
#endif