#include "DeptLocationData.h"
#include <fstream>
#include <algorithm>
#include "../libs/json.hpp"
#include "../libs/Functionplus.h"
#include <iostream>
#include <string>

using namespace std;
using json = nlohmann::json;

DeptLocationData::DeptLocationData(/* args */){
    _MaxId = 0;
    _data.resize(0);
}
DeptLocationData::DeptLocationData(string file_name){
    _MaxId = 0;
    _data.resize(0);
    this->file_name = file_name;
}
void DeptLocationData::ReadData(){
    ifstream inFile(file_name);
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);
        DeptLocation p(
            j["Id"],
            j["DNumber"],
            j["DLocation"]
            );
        p.SetId(j["Id"]);
        _data.push_back(p);
        _MaxId= j["Id"];
    }
    inFile.close();
}
int DeptLocationData::AddData(BaseObject* baseobject){
    DeptLocation* _DataAdd = (DeptLocation*) baseobject;
    _DataAdd->SetId(++_MaxId);
    _data.push_back(*_DataAdd);
    return _MaxId;
}
int DeptLocationData::DeleteData(int DNumber){
    int f=-1;
    for(int i = 0; i<= _data.size(); i++){
        if(_data[i].GetDNumber()==DNumber){
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
int DeptLocationData::UpdateData(BaseObject* baseobject){
    DeptLocation* _Editdata = (DeptLocation*) baseobject;
    int i = _Editdata->GetId();
    _data[i-1] = *_Editdata;
    return 0;
}
vector<BaseObject*> DeptLocationData::SelectAllData(){
    vector<BaseObject*> _outData;
    for(int i=0; i < _MaxId; i++){
        _outData.push_back(&_data[i]);
    }
    return _outData;
}
DeptLocation DeptLocationData::SelectData(string DLocation){
    for(int i = 0; i <= _data.size(); i++){
        if(Functionplus::StringToUpper(_data[i].GetDLocation())==Functionplus::StringToUpper(DLocation)){
            return _data[i];
        }
    }
    throw "SSN is not valid !";
}
int DeptLocationData::PullFile(){
    ofstream outFile(file_name, ios::out);
    if(!outFile) return 0;
    for (DeptLocation e:_data){
        outFile << e.ToJson() << endl;
    }
    outFile.close();
    return 1;
}
int DeptLocationData::GetMaxId(){
    return _MaxId;
}