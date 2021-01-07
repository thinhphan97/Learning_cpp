#include "Member.h"

Member::Member(){

}
Member::Member(int Id,int MemberId, string Name){
    this->Id =Id;
    this->MemberId = MemberId;
    this->Name = Name;
}
Member::Member(int MemberId, string Name){
    this->MemberId = MemberId;
    this->Name = Name;
}
void Member::SetId(int Id){
    this->Id=Id;
}
void Member::SetMemberId(int MemberId){
    this->MemberId = MemberId;
}
void Member::SetName(string Name){
    this->Name = Name;
}
int Member::GetId(){
    return Id;
}
int Member::GetMemberId(){
    return MemberId;
}
string Member::GetName(){
    return Name;
}
string Member::ConvertToString(){
    return to_string(Id)+" "+to_string(MemberId)+" "+Name + "\n";
}
Member::~Member(){

}