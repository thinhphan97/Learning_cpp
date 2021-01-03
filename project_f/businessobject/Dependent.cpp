#include "Dependent.h"

Dependent::Dependent(){};

Dependent::Dependent(int essn, string dependentname, char sex, string bdate, string relationship){
    ESSN = essn;
    DependentName = dependentname;
    Sex = sex;
    BDate = bdate;
    Relationship = relationship;
};

void Dependent::SetId(int Id){
    this->Id = Id;
}
int Dependent::GetId(){
    return Id;
}
void Dependent::SetSubId(){
    --Id;
}
void Dependent::SetESSN(int ESSN){
    this->ESSN = ESSN;
}
int Dependent::GetESSN(){
    return ESSN;
}
void Dependent::SetDependentName(string DependentName){
    this->DependentName = DependentName;
}
string Dependent::GetDependentName(){
    return DependentName;
}
void Dependent::SetSex(char Sex){
    this->Sex = Sex;
}
char Dependent::GetSex(){
    return Sex;
}
void Dependent::SetBDate(string BDate){
    this->BDate = BDate;
}
string Dependent::GetBDate(){
    return BDate;
}
void Dependent::SetRelationship(string Relationship){
    this->Relationship = Relationship;
}
string Dependent::GetRelationship(){
    return Relationship;
}
string Dependent::ConvertToString(){
    string s;
    s += to_string(Id)+" | ";
    s += to_string(ESSN)+" | ";
    s += DependentName + " | ";
    s += string(1,Sex) + " | ";
    s += BDate + " | ";
    s += Relationship;
    return s;

}
json Dependent::ToJson(){
    json j;
    j["Id"] = Id;
    j["ESSN"] = ESSN;
    j["DependentName"] = DependentName;
    j["Sex"] = string(1,Sex);
    j["BDate"] = BDate;
    j["Relationship"] = Relationship;
    return j;
}