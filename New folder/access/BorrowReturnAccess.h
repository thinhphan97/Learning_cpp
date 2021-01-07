#ifndef _access_BorrowReturn_Access_h_
#define _access_BorrowReturn_Access_h_
#include "../data/BorrowReturn.h"
#include "Access.h"
#include "vector"

using namespace std;
class BorrowReturnAccess
{
private:
     vector<BorrowReturn> data;
    int maxid;
public:
    BorrowReturnAccess(/* args */);
    BorrowReturnAccess(string file_name);
    void AddData(BorrowReturn dataBorrow);
    int EditData(BorrowReturn dataBorrow);
    int DeleteData(int memberid);
    vector<BorrowReturn> ShowData();
    void ReadFile(string file_name);
    vector<BorrowReturn> SelectData(int memberid);
    void SaveData(string file_name);
    ~BorrowReturnAccess();
};



#endif