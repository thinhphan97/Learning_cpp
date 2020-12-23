#ifndef _ui_InputEmployee_h_
#define _ui_InputEmployee_h_
#include <iostream>
#include "../businessobject/Employee.h"
#include "../dataaccess/EmployeeData.h"
#include <string>

using namespace std;

class InputEmployee
{
    int Id;
public:
    InputEmployee();
    Employee InputData();
};


#endif