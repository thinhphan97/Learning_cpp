#include "DepartmentData.h"
#include "../libs/Functionplus.h"
#include <fstream>
#include <algorithm>
#include "../libs/json.hpp"
#include <iostream>
#include <string>

using namespace std;
using json = nlohmann::json;

DepartmentData::DepartmentData(){
    _data.resize(0);
    _MaxId = 0;
}
DepartmentData::DepartmentData(string file_name){
    _MaxId = 0;
    _data.resize(0);
    this->file_name = file_name;
}
int DepartmentData::AddData(BaseObject* baseobject){
    Department* _DataAdd = (Department*) baseobject;
    _DataAdd->SetId(++_MaxId);
    _data.push_back(*_DataAdd);
    return _MaxId;
}
int DepartmentData::DeleteData(string dname){
    int f=-1;
    for(int i = 0; i<= _data.size(); i++){
        if(Functionplus::StringToUpper(_data[i].GetDName()) == Functionplus::StringToUpper(dname)){
            _data.erase(_data.begin()+i);
            f=i;
            _MaxId--;
        }
        if(f != -1){
            _data[i].SetSubId();
        }
    }
    return f;
}
int DepartmentData::UpdateData(BaseObject* baseobject){
    Department* _Editdata = (Department*) baseobject;
    int i =_Editdata ->GetId();
    _data[i-1] = *_Editdata;
    return 0;
}
vector<BaseObject*> DepartmentData::SelectAllData(){
    vector<BaseObject*> _outData;
    for(int i=0; i < _MaxId; i++){
        _outData.push_back(&_data[i]);
    }
    return _outData;
}
Department DepartmentData::SelectData(long mgrssn){
    for(int i = 0; i <= _data.size(); i++){
        if(_data[i].GetMgrSSN()==mgrssn){
            return _data[i];
        }
    }

    throw "Mgrssn is not valid !";
}
void DepartmentData::ReadData(){
    ifstream inFile(file_name);
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);
        Department p(
            j["Id"],
            j["DName"],
            j["DNumber"],
            j["MgrSSN"],
            j["MgrStartDate"]
            );
        p.SetId(j["Id"]);
        _data.push_back(p);
        _MaxId= j["Id"];
    }
    inFile.close();
}
int DepartmentData::PullFile(){
    fstream outFile(file_name, ios::out);
    if(!outFile) return 0;
    for (Department d:_data){
        outFile << d.ToJson() << endl;
    }
    outFile.close();
    return 1;
}
int DepartmentData::GetMaxId(){
    return _MaxId;
}