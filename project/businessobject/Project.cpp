#include "Project.h"

Project::Project(/* args */)
{
}

Project::Project(int id, string Pname, int PNum, string PLoca, int Dnum)
{
    Id = id;
    PName = Pname;
    PNumber = PNum;
    PLocation = PLoca;
    DNum = Dnum;
}

Project::Project(string Pname, int PNum, string PLoca, int Dnum)
{
    PName = Pname;
    PNumber = PNum;
    PLocation = PLoca;
    DNum = Dnum;
}

Project::~Project()
{
}

int Project::GetId()
{
    return Id; // return the value of project id
}

void Project::SetId(int id)
{
    Id = id; //assignment farameter for project id
}

void Project::SetSubId()
{
    --Id;
}
void Project::SetPName(string PName){
    this->PName = PName;//assignment farameter for project name
}
string Project::GetPName(){
    return PName;// return the value of project name
}
int Project::GetPNumber()
{
    return PNumber; // return the value of project number
}

void Project::SetPNumber(int PNum)
{
    PNumber = PNum; //assignment farameter for project number
}

string Project::GetPLocation()
{
    return PLocation; // return the value of PLocation
}

void Project::SetPLocation(string PLoca)
{
    PLocation = PLoca; // assignment farameter for PLocation
}

int Project::GetDNum()
{
    return DNum; // return the value of DNum
}

void Project::SetDNum(int Dnum)
{
    DNum = Dnum; //assignment farameter for DNum
}

string Project::ConvertToString(){
    string s;
    s += to_string(Id) + " | ";
    s += PName + " | ";
    s += to_string(PNumber) + " | ";
    s += PLocation + " | ";
    s += to_string(DNum);
    return s;
}

json Project::ToJson()
{
    json j;
    // assignment values for keys
    j["Id"] = Id;
    j["PName"] = PName;
    j["PNumber"] = PNumber;
    j["PLocation"] = PLocation;
    j["DNum"] = DNum;
    return j;
}
