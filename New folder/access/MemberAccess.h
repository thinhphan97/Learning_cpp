#ifndef _access_MemberAccess_h_
#define _access_MemberAccess_h_
#include "../data/Member.h"
#include "Access.h"
#include "vector"

using namespace std;
class MemberAccess
{
private:
    vector<Member> data;
    int maxid;
public:
    MemberAccess();
    MemberAccess(string file_name);
    void AddData(Member datamem);
    int EditData(Member datamem);
    int DeleteData(int memberid);
    vector<Member> ShowData();
    void ReadFile(string file_name);
    Member* SelectData(int memberid);
    void SaveData(string file_name);
    ~MemberAccess();
};


#endif