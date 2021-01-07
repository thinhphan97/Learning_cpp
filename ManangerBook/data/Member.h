#ifndef _data_Member_h_
#define _data_Member_h_
#include <string>
using namespace std;
class Member
{
private:
   int MemberId, Id;
   string Name;
public:
    Member();
    Member(int Id,int MemberId, string Name);
    Member(int MemberId, string Name);
    void SetId(int);
    void SetMemberId(int);
    void SetName(string);
    int GetId();
    int GetMemberId();
    string GetName();
    string ConvertToString();
    ~Member();
};


#endif