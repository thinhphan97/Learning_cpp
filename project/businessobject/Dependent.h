#ifndef Project_businessobject_Dependent_h_
#define Project_businessobject_Dependent_h_
#include <string>
#include "BaseObject.h"
#include "../libs/json.hpp"

using json = nlohmann::json;
using namespace std;

class Dependent:public BaseObject
{
private:
    int Id, ESSN;
    string DependentName, BDate, Relationship;
    char Sex;
public:
    Dependent();
    Dependent(int Id, int essn, string dependentname, char sex, string bdate, string relationship);
    void SetId(int);
    int GetId();
    void SetSubId();
    void SetESSN(int);
    int GetESSN();
    void SetDependentName(string);
    string GetDependentName();
    void SetSex(char);
    char GetSex();
    void SetBDate(string);
    string GetBDate();
    void SetRelationship(string);
    string GetRelationship();
    string ConvertToString();
    json ToJson();

};
#endif