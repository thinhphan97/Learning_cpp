#include <iostream>
#include "data/Book.h"
#include "data/Member.h"
//#include "libs/Function.h"
//#include "data/BorrowReturn.h"
#include "access/MemberAccess.h"
#include "access/BookAccess.h"
#include "access/BorrowReturnAccess.h"
#include "data/BorrowReturn.h"
#include <vector>
#include <algorithm>

using  namespace std;

int main(){
    
    // Book b(1,12,"luoc su thoi gian",12000);
    // cout<< b.ConvertToString();
    // Member m(1,123,"thinh");
    // cout<< Function::ReplaceAll(m.ConvertToString(),' ','_');
    // BorrowReturn r(1,123, 12,"12-2021",1);
    // cout<< r.ConvertToString();
    MemberAccess data;
    //("Database/Member.txt");
    data.AddData(Member(12,"thinhphan"));
    data.AddData(Member(13,"thinhphan1"));
    data.AddData(Member(14,"thinhphan2"));
    data.AddData(Member(15,"thinhphan3"));
    //data.DeleteData(13);
    data.SaveData("Database/Member.txt");
    Member m(1,12,"thinh");
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
    // Member m;
    // cout<<"nhap memberid : "<<endl;
    // int memberid;
    // cin>> memberid;
    // cout<<"Nhap ten : "<<endl;
    // string Name;
    // cin>> Name;

    // m.SetMemberId(memberid);
    // m.SetName(Name);

    // BookAccess d;
    // d.AddData(m);

    // cout<<b.DeleteData(18);

    // cout<< b.SelectData(13)->ConvertToString();
    // vector<Book> _data = b.ShowData();
    // for(Book i: _data){
    //     cout<<i.ConvertToString();
    // }
    // // b.SaveData("Database/Book.txt");
    // sort(_data.begin(), _data.end(), [](Book& a,Book& b)->bool
    // {
    //     return (a.GetPrice() > b.GetPrice());
    // });
    // for(Book i: _data){
    //     cout<<i.ConvertToString();
    // }

    // BorrowReturn b(12,13,"10-2020",1);
    // BorrowReturn b1(12,15,"10-2020",1);
    // BorrowReturn b2(12,16,"10-2020",1);
    // BorrowReturn b3(12,19,"10-2020",1);
    // BorrowReturn b4(12,12,"10-2020",1);
    // BorrowReturn b5(13,14,"10-2020",1);
    // BorrowReturn b6(13,17,"10-2020",1);
    // BorrowReturn b7(13,13,"10-2020",1);
    // BorrowReturn b8(13,14,"10-2020",1);
    // BorrowReturn b9(13,16,"10-2020",1);
    // BorrowReturn b10(14,16,"10-2020",1);
    // BorrowReturn b11(14,13,"10-2020",1);
    // BorrowReturn b12(14,18,"10-2020",1);
    // BorrowReturn b13(14,19,"10-2020",1);
    // BorrowReturn b14(15,14,"10-2020",1);
    // BorrowReturn b15(15,15,"10-2020",1);
    // BorrowReturn b16(15,17,"10-2020",1);
    // BorrowReturn b17(15,15,"10-2020",1);
    // BorrowReturn b18(16,12,"10-2020",1);
    // BorrowReturn b19(16,18,"10-2020",1);
    // BorrowReturn b20(16,13,"10-2020",1);
    // BorrowReturn b21(16,17,"10-2020",1);
    // BorrowReturn b22(16,16,"10-2020",1);

    // BorrowReturnAccess data;
    // data.AddData(b);
    // data.AddData(b1);
    // data.AddData(b2);
    // data.AddData(b3);
    // data.AddData(b4);
    // data.AddData(b5);
    // data.AddData(b6);
    // data.AddData(b7);
    // data.AddData(b8);
    // data.AddData(b9);
    // data.AddData(b10);
    // data.AddData(b11);
    // data.AddData(b12);
    // data.AddData(b13);
    // data.AddData(b14);
    // data.AddData(b15);
    // data.AddData(b16);
    // data.AddData(b17);
    // data.AddData(b18);
    // data.AddData(b19);
    // data.AddData(b20);
    // data.AddData(b21);
    // data.AddData(b22);
    // data.SaveData("Database/BorrowReturn.txt");

    // vector<BorrowReturn> _data = data.SelectData(13);
    // for(BorrowReturn i: _data){
    //     cout<<i.ConvertToString();
    // }

    return 0;

}