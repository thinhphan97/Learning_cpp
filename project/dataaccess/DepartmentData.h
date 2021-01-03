#ifndef Project_dataaccess_DepartmentData_h_
#define Project_dataaccess_DepartmentData_h_
#include <vector>
#include "../businessobject/Department.h"
#include "../businessobject/BaseObject.h"
#include "DataAccess.h"

using namespace std;

class DepartmentData:public DataAccess
{
private:
    vector<Department> _data;
    int _MaxId;
    string file_name;
public:
    DepartmentData();
    DepartmentData(string file_name);
    int AddData(BaseObject* baseobject);
    int DeleteData(string DNumber);
    int UpdateData(BaseObject* baseobject);
    vector<BaseObject*> SelectAllData();
    Department SelectData(long mgrssn);
    void ReadData();
    int PullFile();
    int GetMaxId();
};
#endif