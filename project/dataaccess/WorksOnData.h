#ifndef Project_dataaccess_WorksOnData_h_
#define Project_dataaccess_WorksOnData_h_
#include <vector>
#include "DataAccess.h"
#include "../businessobject/WorksOn.h"

using namespace std;
class WorksOnData:public DataAccess
{
private:
    vector<WorksOn> _data;
    int _MaxId;
    string file_name;
public:
    WorksOnData();
    WorksOnData(string file_name);
    void ReadData();
    int AddData(BaseObject* baseobject);
    int DeleteData(long essn);
    int UpdateData(BaseObject* baseobject);
    vector<BaseObject*> SelectAllData();
    WorksOn SelectData(long essn);
    int PullFile();
    int GetMaxId();
};
#endif