#ifndef  _businessobject_Department_h_
#define  _businessobject_Department_h_
#include <string>

using namespace std;

class Department{
    string Dname;
    int Dnumber;
    int MgrSSN;
    string Mgrstartdate;
public:
    Department();
    Department(string dname, int dnumber, int mgrSSN, string mgrstartdate);
    void Print_department();
};
#endif
