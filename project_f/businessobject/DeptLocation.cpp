#include "DeptLocation.h"

DeptLocation::DeptLocation(/* args */)
{
}

DeptLocation::DeptLocation(int id, int DNum, string DLoca)
{
    Id = id;
    DNumber = DNum;
    DLocation = DLoca;
}

DeptLocation::DeptLocation(int DNum, string DLoca)
{
    DNumber = DNum;
    DLocation = DLoca;
}

DeptLocation::~DeptLocation()
{
}

int DeptLocation::GetId()
{
    return Id; // return the value of dept location id
}

void DeptLocation::SetId(int id)
{
    Id = id; //assignment farameter for dept id
}

void DeptLocation::SetSubId()
{
    --Id;
}

int DeptLocation::GetDNumber()
{
    return DNumber; // return the value of DeptLocationNumber
}

void DeptLocation::SetDNumber(int DNum)
{
    DNumber = DNum; //assignment farameter for DeptLocationNumber
}

string DeptLocation::GetDLocation()
{
    return DLocation; // return the value of DLocation
}

void DeptLocation::SetDLocation(string DLoca)
{
    DLocation = DLoca; // assignment farameter for DLocation
}

string DeptLocation::ConvertToString()
{
    string s;
    s += to_string(Id) + " | ";
    s += to_string(DNumber) + " | ";
    s += DLocation;
    return s;
}

json DeptLocation::ToJson()
{
    json j;
    // assignment values for keys
    j["Id"] = Id;
    j["DNumber"] = DNumber;
    j["DLocation"] = DLocation;
    return j;
}
