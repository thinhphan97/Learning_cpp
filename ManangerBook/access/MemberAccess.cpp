#include "MemberAccess.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

MemberAccess::MemberAccess(){
    data.resize(0);
    maxid = 0;
}
MemberAccess::MemberAccess(string file_name){
    data.resize(0);
    maxid = 0;
    fstream infile(file_name,ios::in);
    int element;
    infile >> element;
    infile >> maxid;
    for(int i =0; i< element; i++){
        int Id, MemberId;
        string Name;
        infile>>Id;
        infile>>MemberId;
        infile>>Name;
        data.push_back(Member(Id, MemberId, Name));
        maxid++;
    }
    infile.close();
}
void MemberAccess::AddData(Member datamem){
    datamem.SetId(maxid++);
    data.push_back(datamem);
}
int MemberAccess::EditData(Member datamem){
    int memberid = datamem.GetMemberId();
    int f = -1;
    int j = 0;
    for(int i=0; i<data.size(); i++){
        if(data[i].GetMemberId()==memberid){
            datamem.SetId(data[i].GetId());
            data[i] = datamem;
            f=1;
        }

    }
    return f;
}
int MemberAccess::DeleteData(int memberid){
    int f=-1;
    for(int i = 0; i < data.size(); i++){
        if(data[i].GetMemberId()==memberid){
            data.erase(data.begin()+i);
            f=i;
        }
    }
    return f;
}
vector<Member> MemberAccess::ShowData(){
    return data;
}
void MemberAccess::SaveData(string file_name){

    fstream outfile(file_name,ios::out);
    outfile<< data.size() << endl;
    outfile<< maxid << endl;
    for(int i=0; i<data.size();i++){
        outfile << data[i].ConvertToString();
    }
    outfile.close();
}
void MemberAccess::ReadFile(string file_name){
    fstream infile(file_name,ios::in);
    int element;
    infile >> element;

    for(int i =0; i< element; i++){
        int Id, MemberId;
        string Name;
        infile>>Id;
        infile>>MemberId;
        infile>>Name;
        data.push_back(Member(Id, MemberId, Name));
        maxid++;
    }
    infile.close();
}
Member* MemberAccess::SelectData(int memberid){   
    Member* m = nullptr;
    for(int i=0; i<data.size(); i++){
        if(data[i].GetMemberId()==memberid){
           return &data[i];
         }
    } 
    return m;  
}
MemberAccess::~MemberAccess(){

}