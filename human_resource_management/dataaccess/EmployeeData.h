#ifndef _dataacess_EmployeeData_h_
#define _dataacess_EmployeeData_h_
#include <vector>
#include <string>
#include "../businessobject/Employee.h"

using namespace std;

class EmployeeData{
private:
    vector<Employee> _data;
    int _maxId;
public:
    EmployeeData();
    EmployeeData(string filename);
    int GetMaxId();
    int PushBack(Employee e);
    Employee Getdata(int i);
    //Employee Get(int i);
    Employee* GetPointer(int i);
    int ExportToFile(string);
    int DeleteSSN(long ssn);
    Employee EditSSN(long ssn,int choose,int intParameters);
    Employee EditSSN(long ssn,int choose,string stringParameters);
    Employee EditSSN(long ssn,int choose,char charParameters);


};

#endif