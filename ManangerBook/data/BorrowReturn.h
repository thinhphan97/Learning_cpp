#ifndef _data_BorrowReturn_h_
#define _data_BorrowReturn_h_
#include <string>
using namespace std;
class BorrowReturn
{
private:
    int Id, MemberId, BookId, Status;
    string Date;

public:
    BorrowReturn(/* args */);
    BorrowReturn(int, int, int, string, int);
    BorrowReturn(int, int, string, int);
    void SetId(int);
    void SetMemberId(int);
    void SetBookId(int);
    void SetDate(string);
    void SetStatus(int);
    int GetId();
    int GetMemberId();
    int GetBookId();
    string GetDate();
    int GetStatus();
    string ConvertToString();
    ~BorrowReturn();
};

#endif