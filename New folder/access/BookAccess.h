#ifndef _access_BookAccess_h_
#define _access_BookAccess_h_
#include "../data/Book.h"
#include "Access.h"
#include "vector"

using namespace std;
class BookAccess
{
private:
    vector<Book> data;
    int maxid;

public:
    BookAccess(/* args */);
    BookAccess(string file_name);
    void AddData(Book datamem);
    int EditData(Book datamem);
    int DeleteData(int memberid);
    vector<Book> ShowData();
    void ReadFile(string file_name);
    Book *SelectData(int memberid);
    void SaveData(string file_name);
    ~BookAccess();
};

#endif