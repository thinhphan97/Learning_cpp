#include "businessobject/Employee.h"
#include "dataaccess/DataAccess.h"
#include "dataaccess/EmployeeData.h"
#include "businessobject/BaseObject.h"
#include "dataaccess/DepartmentData.h"
#include "businessobject/DeptLocation.h"
#include "dataaccess/DeptLocationData.h"
#include "businessobject/Project.h"
#include "dataaccess/ProjectData.h"
#include "iostream"
#include <vector>

using namespace std;

int main(){
    // DataAccess* data = new ProjectData("Project.Data");
    // data->ReadData();
    // vector<BaseObject*> _data;
    // _data = data->SelectAllData();
    // for(BaseObject* PrintData:_data){
    //     Project* Data = (Project*) PrintData;
    //     cout<< Data->ConvertToString()<<endl;
    // }
    // ProjectData data("Project.Data");
    // data.ReadData();
    // cout<< data.SelectData("ProductX").ConvertToString()<<endl;
    
    system("pause");
    return 0;
}