#ifndef Project_dataaccess_DataAccess_h_
#define Project_dataaccess_DataAccess_h_
#include "../businessobject/BaseObject.h"
#include <vector>
using namespace std;

class DataAccess
{
public:
    virtual int AddData(BaseObject* baseobject)=0;
    virtual int UpdateData(BaseObject* BaseObject)=0;
    virtual vector<BaseObject*> SelectAllData()=0;
    virtual int PullFile()=0;
    virtual void ReadData()=0;
};
#endif