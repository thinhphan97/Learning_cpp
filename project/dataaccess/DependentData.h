#ifndef Project_dataaccess_DependentData_h_
#define Project_dataaccess_DependentData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/Dependent.h"

using namespace std;
class DependentData:public DataAccess
{
private:
    vector<Dependent> _data;
    int _MaxId;
    string file_name;
public:
    DependentData();
    DependentData(string file_name);
    void ReadData();
    int AddData(BaseObject* baseobject);
    int DeleteData(int essn);
    int UpdateData(BaseObject* baseobject);
    vector<BaseObject*> SelectAllData();
    Employee SelectData(int essn);
    int PullFile();
    int GetMaxId();
};


#endif