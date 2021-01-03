#ifndef Project_dataaccess_DeptLocationData_h_
#define Project_dataaccess_DeptLocationData_h_
#include <vector>
#include <string>
#include "../businessobject/DeptLocation.h"
#include "DataAccess.h"
using namespace std;

class DeptLocationData:public DataAccess
{
private:
    vector<DeptLocation>_data;
    int _MaxId;
    string file_name;
public:
    DeptLocationData(/* args */);
    DeptLocationData(string file_name);
    void ReadData();
    int AddData(BaseObject* baseobject);
    int DeleteData(int DNumber);
    int UpdateData(BaseObject* baseobject);
    vector<BaseObject*> SelectAllData();
    DeptLocation SelectData(string DLocation);
    int PullFile();
    int GetMaxId();
};

#endif
