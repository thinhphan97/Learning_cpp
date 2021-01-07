#include "BookAccess.h"
#include "../libs/Function.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

BookAccess::BookAccess(/* args */){
    data.resize(0);
    maxid = 0;
}

BookAccess::BookAccess(string file_name){
    data.resize(0);
    maxid = 0;
    fstream infile(file_name,ios::in);
    int element;
    infile >> element;
    infile >> maxid;
    for(int i =0; i< element; i++){
        int Id, BookId, Price;
        string Name;
        infile>>Id;
        infile>>BookId;
        infile>>Name;
        infile>>Price;
        Name = Function::ReplaceAll(Name,'_',' ');
        data.push_back(Book(Id, BookId, Name, Price));
    }
    infile.close();
}

void BookAccess::AddData(Book databook){
    databook.SetId(maxid++);
    data.push_back(databook);
}

int BookAccess::EditData(Book databook){
    int memberid = databook.GetBookId();
    int f = -1;
    int j = 0;
    for(int i=0; i<data.size(); i++){
        if(data[i].GetBookId()==memberid){
            databook.SetId(data[i].GetId());
            data[i] = databook;
            f=1;
        }
    }
    return f;
}

int BookAccess::DeleteData(int bookid){
    int f=-1;
    for(int i = 0; i < data.size(); i++){
        if(data[i].GetBookId()==bookid){
            data.erase(data.begin()+i);
            f=i;
        }
    }
    return f;
}
vector<Book> BookAccess::ShowData(){
    return data;
}
void BookAccess::ReadFile(string file_name){
    fstream infile(file_name,ios::in);
    int element;
    infile >> element;
    infile >> maxid;
    for(int i =0; i< element; i++){
        int Id, BookId, Price;
        string Name;
        infile>>Id;
        infile>>BookId;
        infile>>Name;
        infile>>Price;
        data.push_back(Book(Id, BookId, Function::ReplaceAll(Name,'_',' '), Price));
    }
    infile.close();
}
Book* BookAccess::SelectData(int bookid){
    Book* m = nullptr;
    for(int i=0; i<data.size(); i++){
        if(data[i].GetBookId()==bookid){
           return &data[i];
         }
    }
    return m;
}
void BookAccess::SaveData(string file_name){
    fstream outfile(file_name,ios::out);
    outfile<< data.size() << endl;
    outfile<< maxid << endl;
    for(int i=0; i<data.size();i++){
        outfile << data[i].ConvertToString();
    }
    outfile.close();}
BookAccess::~BookAccess(){

}