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

};

#endif