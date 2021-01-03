#ifndef Project_dataaccess_EmployeeData_h_
#define Project_dataaccess_EmployeeData_h_
#include <vector>
#include "DataAccess.h"
#include "../businessobject/Employee.h"

using namespace std;
class EmployeeData:public DataAccess
{
private:
    vector<Employee> _data;
    int _MaxId;
    string file_name;
public:
    EmployeeData();
    EmployeeData(string file_name);
    void ReadData();
    int AddData(BaseObject* baseobject);
    int DeleteData(long ssn);
    int UpdateData(BaseObject* baseobject);
    vector<BaseObject*> SelectAllData();
    Employee SelectData(long ssn);
    int PullFile();
    int GetMaxId();
};
#endif