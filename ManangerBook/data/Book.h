#ifndef _data_Book_h_
#define _data_Book_h_
#include <string>
using namespace std;
class Book
{
private:
    int BookId, Price,Id;
    string Name;
public:
    Book(/* args */);
    Book(int, int, string, int);
    Book(int, string, int);
    void SetId(int);
    void SetBookId(int);
    void SetName(string);
    void SetPrice(int);
    int GetId();
    int GetBookId();
    string GetName();
    int GetPrice();
    string ConvertToString();
    ~Book();
};

#endif