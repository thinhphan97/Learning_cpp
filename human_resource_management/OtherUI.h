#ifndef _Project_ui_OtherUI_h
#define _Project_ui_OtherUI_h

#include "../dataaccess/EmployeeData.h"
#include "../dataaccess/DependentData.h"
#include "../dataaccess/ProjectData.h"
#include "../dataaccess/WorkOnData.h"

class OtherUI
{
    EmployeeData *employeeData = new EmployeeData("employee_data.txt");
    DependentData *dependentData = new DependentData("dependent_data.txt");
    ProjectData *projectData = new ProjectData("project_data.txt");
    WorkOnData *workOnData = new WorkOnData("work_on_data.txt");

public:
<<<<<<< HEAD
    //void GetEmployeeBySupervised();
    void DivisionAverageSalary();
    void AverageSalaryByDepartment();
    void DisplayManangerNoDependent();
    void DisplayEmployProjectDepart();
=======
    void GetEmployeeBySupervised();
    void GetEmployeeHaveSonOrDaughter();
    void GetNameProjectAndTime();
    void GetEmployeeNoProject();
>>>>>>> e60680c0011159ad8f93a74c3fba46daf7607e81
};

#endif