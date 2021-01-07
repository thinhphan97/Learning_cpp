#include <iostream>
#include "data/Book.h"
#include "data/Member.h"
//#include "libs/Function.h"
//#include "data/BorrowReturn.h"
#include "access/MemberAccess.h"
#include "access/BookAccess.h"
#include <vector>

using  namespace std;

int main(){
    
    // Book b(1,12,"luoc su thoi gian",12000);
    // cout<< b.ConvertToString();
    // Member m(1,123,"thinh");
    // cout<< Function::ReplaceAll(m.ConvertToString(),' ','_');
    // BorrowReturn r(1,123, 12,"12-2021",1);
    // cout<< r.ConvertToString();
    // MemberAccess data("Database/Member.txt");
    // data.AddData(Member(12,"thinhphan"));
    // data.AddData(Member(13,"thinhphan1"));
    // data.AddData(Member(14,"thinhphan2"));
    // data.AddData(Member(15,"thinhphan3"));
    // data.DeleteData(13);
    // Member m(1,12,"thinh");
    BookAccess b("Database/Book.txt");
    // BookAccess b;

    // b.AddData(Book(12,"toi thay hoa vang tren doi co xanh",12000));
    // b.AddData(Book(13,"toi thay hoa vang tren doi co xanh1",13000));
    // b.AddData(Book(14,"toi thay hoa vang tren doi co xanh2",14000));
    // b.AddData(Book(15,"toi thay hoa vang tren doi co xanh3",15000));
    // b.AddData(Book(16,"toi thay hoa vang tren doi co xanh4",16000));
    // b.AddData(Book(17,"toi thay hoa vang tren doi co xanh5",17000));
    // b.AddData(Book(18,"toi thay hoa vang tren doi co xanh6",18000));
    // b.AddData(Book(19,"toi thay hoa vang tren doi co xanh7",19000));
    // b.AddData(Book(20,"toi thay hoa vang tren doi co xanh8",20000));

    cout<<b.DeleteData(18);

    cout<< b.SelectData(13)->ConvertToString();
    vector<Book> _data = b.ShowData();
    for(Book i: _data){
        cout<<i.ConvertToString();
    }
    b.SaveData("Database/Book.txt");
    return 0;

}