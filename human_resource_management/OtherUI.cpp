#include "OtherUI.h"
#include "../businessobject/Employee.h"
<<<<<<< HEAD
#include "../businessobject/BaseObject.h"
#include "../dataaccess/DepartmentData.h"
#include "../businessobject/Department.h"
#include "../dataaccess/DependentData.h"
#include "../dataaccess/ProjectData.h"
#include "../businessobject/Project.h"
#include "../dataaccess/WorkOnData.h"
#include "../businessobject/WorkOn.h"
#include "../businessobject/Dependent.h"
#include "../libs/Functionplus.h"
=======
#include "../businessobject/Dependent.h"
#include "../businessobject/Project.h"
#include "../businessobject/WorkOn.h"
>>>>>>> e60680c0011159ad8f93a74c3fba46daf7607e81
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

<<<<<<< HEAD
// void OtherUI::GetEmployeeBySupervised()
// {
//     DataAccess *dataAccess = new EmployeeData("Database/employee_data.txt");
//     string name;
//     cout << "Enter Name suppervised: " << endl;
//     cin >> name;
//     cout << "List Employees supervised by" << name << " :" << endl;
//     long ssn = 0;
//     for (BaseObject *bo : dataAccess->GetAllData())
//     {
//         if (Employee*)bo->GetFName() == name)
//         {
//             ssn = e->GetSSN();
//         }
//     }
//     if (ssn == 0)
//     {
//         cout << "name is wrong" << endl;
//     }
//     else
//     {
//         for (Employee e : employeeData.GetAllData())
//         {
//             if (e.GetSuperSSN == ssn)
//             {
//                 cout << e.ToString();
//             }
//         }
//     }
// }
    /** @brief fucntion calculate the average income of employee by sex 
     *  user will enter the sex (fermale or male)
     *  @return average income corerresponding with the sex
    */
void OtherUI::DivisionAverageSalary(){
    DataAccess *dataAccess = new EmployeeData("Database/employee_data.txt");//load Data of Employee 
    cout<<"____________Average salary sheet by gender__________"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"Please enter the gender you want to count (fermale/male): ";
    string sex;//The variable stores the input value
    while(1){
        cin>>sex;
        if(Functionplus::StringToUpper(sex)=="FERMALE"||Functionplus::StringToUpper(sex)=="MALE")//Compare satisfies the entry conditions
        {
            break;
        }
        cout<<"You entered it wrong, you should re-enter !!"<<endl;
    }
    char compare;//comparison variable
    if(Functionplus::StringToUpper(sex)=="FERMALE"){//the condition that assigns the comparison variable
        compare='F';//if the entry is male
    }else{
        compare='M';//if the entry is fermale
    };
    vector<BaseObject*> data;
    data = dataAccess->GetAllData(); //take data
    int total=0;//Turn the total amount of money by gender
    int count=0;//count the number of people by gender
    for(int i=0;i < dataAccess->GetMaxId(); i++){
        Employee* _data= (Employee*) data[i];//Converts pointer type from parent class to subclass
        if(_data->GetSex()==compare){//gender discrimination of employees
            count ++;//calculate the total number of people
            total+= (int)_data->GetSalary();//calculate the total salary by gender
        };
    };
    float result = (float)total/(float)count;//Calculate average salary by gender
    cout<<"The average salary by"<< sex <<"gender is : "<<result<<endl;//Print results to the screen
}
    /** @brief Function display average salary of all employees in department
     * Function display average salary of all employees in department
     * Function as the parameter is string variable
     * After loop through each element at class DepartmentData, we get pnumber variable
     * We check, if pnumber = 0, return there is no department you typed, please type again.
     * else we loop through each element at class EmployeeData, we get average variable
    */
void OtherUI::AverageSalaryByDepartment(){
    DataAccess* DataDepart = new DepartmentData("Database/department_data.txt");
    DataAccess* DataEmploy = new EmployeeData("Database/employee_data.txt");
    cout<<"_____________Average Salary By Department___________"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"Please enter the department that you need to check under the following Id :"<<endl;
    cout<<"1. Research."<<endl;
    cout<<"2. Administration."<<endl;
    cout<<"3. Headquarters."<<endl;
    cout<<"choose : ";
    int choose;
    while (1)
    {
        cin>>choose;
        if(choose <= 3 && choose >= 1 ){
            break;
        }
        cout<<"You entered incorrectly and you need to re-enter"<<endl;
    }
    string dname;
    string depart;
    if(choose==1){
        depart = Functionplus::StringToUpper("Research");
        dname = "Research";
    }else if (choose==2)
    {
        depart = Functionplus::StringToUpper("Administration");
        dname = "Administration";
    }else{
        depart = Functionplus::StringToUpper("Headquarters");
        dname = "Headquarters";
    };
    
    vector<BaseObject*> datadepart;
    datadepart = DataDepart->GetAllData();
    vector<BaseObject*> dataemploy;
    dataemploy = DataEmploy->GetAllData();
    int dnumber;
    for(int i=0; i< DataDepart->GetMaxId();i++){
        Department* _datadepart = (Department*) datadepart[i];
        if(Functionplus::StringToUpper(_datadepart->GetDName())==depart){
            dnumber = _datadepart->GetDNumber();
            break;
        }
    }
    float total=0;
    int count=0;
    for(int j=0; j < DataEmploy->GetMaxId(); j++){
        Employee* _dataemploy = (Employee*) dataemploy[j];
        if(_dataemploy->GetDNO()==dnumber){
            count++;
            total += _dataemploy->GetSalary();
        }
    }
    float Avr=total/count;
    cout<<"average salary of " << dname << " department is :"<< Avr <<endl;  
}
    /** @brief Function display the last name of all manager don't have dependent.
     *  Take manager's SSN in department sheet to compare with employee's SSN of dependent sheet.
     *  If not found, get the last name of manager in employee sheet then display it.
     *  @return no return
     */
void OtherUI::DisplayManangerNoDependent(){
    cout<<"____________Display Mananger No Dependent___________"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    DataAccess* DataDepart = new DepartmentData("Database/department_data.txt");
    DataAccess* DataDepend = new DependentData("Database/dependent_data.txt");
    DataAccess* DataEmploy = new EmployeeData("Database/employee_data.txt");
    vector<BaseObject*> datadepart;
    vector<BaseObject*> datadepend;
    vector<BaseObject*> datademploy;
    datadepart = DataDepart->GetAllData();
    datadepend = DataDepend->GetAllData();
    datademploy = DataEmploy->GetAllData();
    vector<long> mananger;
    for(int i=0; i< DataDepart->GetMaxId(); i++){
        Department* _datadepart =(Department*) datadepart[i];
        for(int j = 0; j< DataDepend->GetMaxId(); j++){
            Dependent* _datadepend = (Dependent*) datadepend[i];
            if(_datadepend->GetESSN()==_datadepart->GetMgrSSN()){
                mananger.push_back(_datadepend->GetESSN());
            }
        } 
    }
    sort(mananger.begin(),mananger.end());
    mananger.erase(unique(mananger.begin(), mananger.end()), mananger.end());
    for(long essn:mananger){
        for(BaseObject* _dataemploy:datademploy){
            Employee* _data = (Employee*) _dataemploy;
            if(_data->GetSSN()==essn){
                cout<<_data->GetFName()<<" "<<_data->GetLName()<<endl;
            }
        }
    }
}
    /** @brief function display all employee in department, project and min hours entered form the keyboard
     * function display all employee in department, project and min hours entered form the keyboard
     * User enter according to the instructions displayed by the system
     * After loop through each element at class ProjectData, we get pnumber variable and dumber 
     * After loop through each element at class WorksonData The system returns a vector containing the SSNs 
     * that satisfy the project and work time conditions Then the elements in the vector find the conditions 
     * that satisfy the ssn and the part number in the employee copy and display it to the user.
    */
void OtherUI::DisplayEmployProjectDepart(){

    cout<<"____Staff in the department and related projects____"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    DataAccess* DataEmoloy = new EmployeeData("Database/employee_data.txt");
    DataAccess* DataProject = new ProjectData("Database/project_data.txt");
    DataAccess* DataWorkOn = new WorkOnData("Database/work_on_data.txt");
    vector<BaseObject*> dataemploy;
    vector<BaseObject*> dataproject;
    vector<BaseObject*> dataworkon;
    dataemploy = DataEmoloy->GetAllData();
    dataproject = DataProject->GetAllData();
    dataworkon = DataWorkOn->GetAllData();
    cout<< "Please enter the project name you want to check by id: "<<endl;
    cout<<"1. ProductX"<<endl;
    cout<<"2. ProductY"<<endl;
    cout<<"3. ProductZ"<<endl;
    cout<<"4. Computerization"<<endl;
    cout<<"5. Reorganization"<<endl;
    cout<<"6. Newbenefits"<<endl;
    cout<<"_______________________________________________________"<<endl;
    int choose;
    while (1)
    {
        cin >> choose;
        if(choose < 7 && choose > 0){
            break;
        };
        cout<<"You entered incorrectly and you need to re-enter..."<<endl;
    };
    
    cout<< "Please enter Department name you want to check by id: "<<endl;
    cout<<"1. Research"<<endl;
    cout<<"2. Administration"<<endl;
    cout<<"3. Headquarters"<<endl;
    cout<<"_______________________________________________________"<<endl;
    int choose2;
    while (1)
    {
        cin >> choose2;
        if(choose < 4 && choose > 0){
            break;
=======
void OtherUI::GetEmployeeBySupervised()
{
    string name;
    cout << "Enter Name suppervised: " << endl;

    cin >> name;

    cout << "List Employees supervised by  " << name << " :" << endl;

    long ssn = 0;
    for (BaseObject *bo : employeeData->GetAllData())
    {
        if (((Employee *)bo)->GetLName() == name)
        {
            ssn = (((Employee *)bo)->GetSSN());
            for (BaseObject *bo : employeeData->GetAllData())
            {
                if (((Employee *)bo)->GetSuperSSN() == ssn)
                {
                    cout << ((Employee *)bo)->ToString() << endl;
                }
            }
>>>>>>> e60680c0011159ad8f93a74c3fba46daf7607e81
        }
        cout<<"You entered incorrectly and you need to re-enter..."<<endl;
    }
    string pname;

    switch (choose)
    {
<<<<<<< HEAD
    case 1:
        pname = Functionplus::StringToUpper("Productx");
        break;
    case 2:
        pname = Functionplus::StringToUpper("ProductY");
        break;
    case 3:
        pname = Functionplus::StringToUpper("ProductZ");
        break;
    case 4:
        pname = Functionplus::StringToUpper("Computerization");
        break;
    case 5:
        pname = Functionplus::StringToUpper("Reorganization");
        break;
    case 6:
        pname = Functionplus::StringToUpper("Newbenefits");
        break;
    
    default:
        break;
    };

    string Dname;

    switch (choose)
    {
    case 1:
        Dname = Functionplus::StringToUpper("Research");
        break;
    case 2:
        Dname = Functionplus::StringToUpper("Administration");
        break;
    case 3:
        Dname = Functionplus::StringToUpper("Headquarters");
        break;
    default:
        break;
    };
    cout<< "enter workers' minimum working hours per week :"<<endl;
    int Hours;
    cin >> Hours;
    int pnumber;
    int dnumber;
    for(BaseObject* _data:dataproject){
        Project* _dataProject = (Project*) _data;
        if(Functionplus::StringToUpper(_dataProject->GetProjectName())==pname){
            pnumber=_dataProject->GetProjectNumber();
            dnumber=_dataProject->GetDNum();
            break;
        }
    }
    vector<long> ESSN;
    for(BaseObject* _data:dataworkon){
        WorkOn* _dataworkon = (WorkOn*) _data;
        if(_dataworkon->GetPNO()==pnumber){
            ESSN.push_back(_dataworkon->GetESSN());
        }
    }
    for(long essn:ESSN){
        for(BaseObject* _data:dataemploy){
            Employee* _dataemploy = (Employee*) _data;
            if(_dataemploy->GetSSN()==essn && _dataemploy->GetDNO()==dnumber){
                cout<<_dataemploy->GetFName()<<" "<<_dataemploy->GetLName()<<endl;
            }
        }
    }
}
=======
        cout << "name is wrong" << endl;
    }
}

void OtherUI::GetEmployeeHaveSonOrDaughter()
{
    long ssn = 0;
    for (BaseObject *bo : dependentData->GetAllData())
    {
        if (((Dependent *)bo)->GetRelationship() == "SON" || ((Dependent *)bo)->GetRelationship() == "DAUGHTER")
        {
            ssn = ((Dependent *)bo)->GetESSN();
            cout << employeeData->GetEmployeeBySSN(ssn)->ToString() << endl;
        }
    }

    if (ssn == 0)
    {
        cout << "list is empty" << endl;
    }
}

void OtherUI::GetNameProjectAndTime()
{
    int pnum;
    cout << "Enter the Project Number:  ";
    cin >> pnum;
    float sumtime = 0;
    for (BaseObject *bo : projectData->GetAllData())
    {
        if ((((Project *)bo)->GetProjectNumber()) == pnum)
        {
            cout << "The project name is :" << ((Project *)bo)->GetProjectName() << endl;

            for (BaseObject *bo : workOnData->GetAllData())
            {
                if ((((WorkOn *)bo)->GetPNO()) == pnum)
                {
                    sumtime += ((WorkOn *)bo)->GetHours();
                }
            }
        }
    }
    cout << "The Sum time :" << sumtime << endl;
}

void OtherUI::GetEmployeeNoProject()
{
    for (BaseObject *bo : employeeData->GetAllData())
    {
        int temp = 0;
        for (BaseObject *bowo : workOnData->GetAllData())
        {
            if ((((Employee *)bo)->GetSSN()) == (((WorkOn *)bowo)->GetESSN()))
            {
                temp = 1;
            }
        }
        if (temp == 0)
        {
            cout << ((Employee *)bo)->GetFName() << " " << ((Employee *)bo)->GetMInit() << " " << ((Employee *)bo)->GetLName() << endl;
        }
    }
}
>>>>>>> e60680c0011159ad8f93a74c3fba46daf7607e81
