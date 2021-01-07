#include "MemberUi.h"
#include "../access/MemberAccess.h"
#include "../data/Member.h"
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

MemberUi::MemberUi(string file_name){
    this->file_name = file_name; 
}

void MemberUi::MemberAdd(){
    system("cls");
    cout<<"_______________________Add data Member______________________"<<endl;
    vector<Member> _data;
    while(true){
        int memberid;
        string name;
        cout<< "Enter Member Id :"<<endl;
        cin>> memberid;
        cout<< "Enter Name Member:"<< endl;
        cin>>name;

        _data.push_back(Member(memberid,name));
        cout<< "If you want to stop typing, press y"<< endl;
        string f;
        cin >> f;
        if(f=="y"){
            break;
        }
     }
     cout<< setw(10)<<"Id "<<"|"<<setw(10)<<"MemberId "<<"|"<<setw(10)<<"Name "<<"|"<<endl;

     for(Member i:_data){
         cout<< setw(10)<<i.GetId()<<"|"<<setw(10)<<i.GetMemberId()<<"|"<<setw(10)<<i.GetName()<<"|"<<endl;
     }
     cout<<"Press the y key to save the data "<<endl;
     string f;
     cin>>f;
     if(f=="y"){
        MemberAccess data("Database/Member.txt");
         for(Member i:_data){
             data.AddData(i);
         }
         data.SaveData(file_name);
     }
}
void MemberUi::MemberEdit(){
    system("cls");
    cout<<"_______________________Edit data Member______________________"<<endl;
    cout<< "Enter Member Id you need edit:";
    int memberid;
    cin>>memberid;
    MemberAccess data(file_name);
    Member* M = data.SelectData(memberid);
    cout<<"you want to Edit :"<<endl;
    cout<< M->ConvertToString()<<endl;
    cout<< "you need enter iformation member "<< endl;
    string name;
    cout<< "Enter Name Member:"<< endl;
    cin>>name;
    Member _data(memberid,name);
    data.EditData(_data);
    cout<<"you edit to : "<< _data.ConvertToString();
    data.SaveData(file_name);
    cin.get();
}

void MemberUi::MemberRead(){
    system("cls");
    cout<<"_______________________Read data Member______________________"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    MemberAccess data(file_name);
    vector<Member> _data = data.ShowData();
    cout<< setw(10)<<"Id "<<"|"<<setw(10)<<"MemberId "<<"|"<<setw(10)<<"Name "<<"|"<<endl;
    for(Member i: _data){
        cout<< setw(10)<<i.GetId()<<"|"<<setw(10)<<i.GetMemberId()<<"|"<<setw(10)<<i.GetName()<<"|"<<endl;
    }
}