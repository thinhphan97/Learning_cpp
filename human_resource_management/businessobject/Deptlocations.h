#ifndef _businessobject_Deptlocations_h_
#define _businessobject_Deptlocations_h_
#include <string>
class Deptlocations
{
private:
    std::string Dlocation;
    int Dnumber;
public:
    Deptlocations();
    Deptlocations(int dnumber, std::string dlocation);
};
#endif