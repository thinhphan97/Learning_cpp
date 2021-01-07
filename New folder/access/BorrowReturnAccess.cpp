#include "BorrowReturnAccess.h"
#include "../libs/Function.h"
#include <fstream>
#include <iostream>
#include <string>

BorrowReturnAccess::BorrowReturnAccess(/* args */){
    data.resize(0);
    maxid = 0;
}
BorrowReturnAccess::BorrowReturnAccess(string file_name){
    data.resize(0);
    maxid = 0;
    fstream infile(file_name,ios::in);
    int element;
    infile >> element;
    infile >> maxid;
    for(int i =0; i< element; i++){
        int Id, BookId, MemberId, Status;
        string Date;
        infile >> Id;
        infile >> MemberId;
        infile >> BookId;
        infile >> Date;
        infile >> Status;
        data.push_back(BorrowReturn(Id, MemberId, BookId, Date, Status));
    }
    infile.close();
}
void BorrowReturnAccess::AddData(BorrowReturn dataBorrow){
    dataBorrow.SetId(maxid++);
    data.push_back(dataBorrow);
}
int BorrowReturnAccess::EditData(BorrowReturn dataBorrow){
    int memberid = dataBorrow.GetMemberId();
    int f = -1;
    int j = 0;
    for(int i=0; i<data.size(); i++){
        if(data[i].GetMemberId()==memberid){
            dataBorrow.SetId(data[i].GetId());
            data[i] = dataBorrow;
            f=1;
        }
    }
    return f;
}
int BorrowReturnAccess::DeleteData(int memberid){
    int f=-1;
    for(int i = 0; i < data.size(); i++){
        if(data[i].GetMemberId()==memberid){
            data.erase(data.begin()+i);
            f=i;
        }
    }
    return f;
}
vector<BorrowReturn> BorrowReturnAccess::ShowData(){
    return data;
}
void BorrowReturnAccess::ReadFile(string file_name){
    fstream infile(file_name,ios::in);
    int element;
    infile >> element;
    infile >> maxid;
    for(int i =0; i< element; i++){
        int Id, BookId, MemberId, Status;
        string Date;
        infile >> Id;
        infile >> MemberId;
        infile >> BookId;
        infile >> Date;
        infile >> Status;
        data.push_back(BorrowReturn(Id, MemberId, BookId, Date, Status));
    }
    infile.close();
}
vector<BorrowReturn> BorrowReturnAccess::SelectData(int memberid){
    vector<BorrowReturn> _data;
    for(int i=0; i<data.size(); i++){
        if(data[i].GetMemberId()==memberid){
           _data.push_back(data[i]);
         }
    }
    return _data;
}
void BorrowReturnAccess::SaveData(string file_name){
    fstream outfile(file_name,ios::out);
    outfile<< data.size() << endl;
    outfile<< maxid << endl;
    for(int i=0; i<data.size();i++){
        outfile << data[i].ConvertToString();
    }
    outfile.close();
}
BorrowReturnAccess::~BorrowReturnAccess(){

}