#ifndef _dataaccess_ProjectData_h_
#define _dataaccess_ProjectData_h_
#include <vector>
#include "../businessobject/Project.h"
#include "DataAccess.h"
using namespace std;
class ProjectData:public DataAccess
{
private:
    vector<Project> _data;
    int _MaxId;
    string file_name;
public:
    ProjectData(/* args */);
    ProjectData(string file_name);
    void ReadData();
    int AddData(BaseObject* baseobject);
    int DeleteData(string PName);
    int UpdateData(BaseObject* baseobject);
    vector<BaseObject*> SelectAllData();
    Project SelectData(string PName);
    int PullFile();
    int GetMaxId();
};


#endif