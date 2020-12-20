#ifndef _businessobject_Dependent_h_
#define _businessobject_Dependent_h_
#include <string>

using namespace std;

class Dependent
{
 int ESSN;
 string Dependent_name, Sex, Bdate, Relationship;
public:
    Dependent();
    Dependent(int essn, string dependent_name, string sex, string bdate, string relationship);
};
#endif