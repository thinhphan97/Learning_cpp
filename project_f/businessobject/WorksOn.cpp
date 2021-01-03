#include "WorksOn.h"

WorksOn::Workson(){ }
WorksOn::Workson(int id, int essn, int pno, int hours){
    this->Id = id;
    this->ESSN = essn;
    this->PNO = pno;
    this->Hours = hours;
}
WorksOn::Workson(int essn, int pno, int hours){
    this->ESSN = essn;
    this->PNO = pno;
    this->Hours = hours;
}    
void WorksOn::SetId(int id){
    this->Id = id;

}
int WorksOn::GetId(){
    return Id;
}
void WorksOn::SetSubId(){
    --Id;
}

void WorksOn::SetESSN(int essn){
    this->ESSN = essn;
}
int WorksOn::GetESSN(){
    return ESSN;
}
void WorksOn::SetPNO(int pno){
    this->PNO = pno;
}
int WorksOn::GetPNO(){
    return PNO;
}
void WorksOn::SetHours(int hours){
    this->Hours = hours;
}
int WorksOn::GetHours(){
    return Hours;
}
string WorksOn::ConvertToString(){
    string s;
    s += to_string(Id)+" | ";
    s += to_string(ESSN)+" | ";
    s += to_string(PNO)+" | ";
    s += to_string(Hours)+" | ";
    return s;
}
json WorksOn::ToJson(){
    json j;
    j["Id"]=Id;
    j["ESSN"]=ESSN;
    j["PNO"]=PNO;
    j["Hours"]=Hours;
    return j;
}