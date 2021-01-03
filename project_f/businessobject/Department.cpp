#include "Department.h"
#include <iostream>

using namespace std;

Department::Department(){};
Department::Department(string DName, int DNumber, long MgrSSN, string MgrStartDate){
    this->DName = DName;
    this->DNumber = DNumber;
    this->MgrSSN = MgrSSN;
    this->MgrStartDate = MgrStartDate;
}
Department::Department(int Id, string DName, int DNumber, long MgrSSN, string MgrStartDate){
    this->Id = Id;
    this->DName = DName;
    this->DNumber = DNumber;
    this->MgrSSN = MgrSSN;
    this->MgrStartDate = MgrStartDate;
}
void Department::SetId(int Id){
    this->Id = Id;
}
int Department::GetId(){
    return Id;
}
void Department::SetSubId(){
    --Id;
}
long Department::GetMgrSSN(){
    return MgrSSN;
}
string Department::GetDName(){

    return DName;
}
string Department::ConvertToString(){
    string s;
    s += to_string(Id) + " | ";
    s += DName + " | ";
    s += to_string(DNumber) + " | ";
    s += to_string(MgrSSN) + " | ";
    s += MgrStartDate;
    return s;
}
json Department::ToJson(){
    json d;
    d["Id"]= Id;
    d["DName"] = DName;
    d["DNumber"] = DNumber;
    d["MgrSSN"] = MgrSSN;
    d["MgrStartDate"] = MgrStartDate;
    return d;
}