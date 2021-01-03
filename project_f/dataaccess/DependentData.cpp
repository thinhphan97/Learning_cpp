#include "DependentData.h"
#include <fstream>
#include <algorithm>
#include "../libs/json.hpp"
#include <iostream>

using namespace std;
using json = nlohmann::json;

DependentData::DependentData(){
    _MaxId = 0;
    _data.resize(0);
}
DependentData::DependentData(string file_name){
    _MaxId = 0;
    _data.resize(0);
    this->file_name = file_name;
}
void DependentData::ReadData(){
    
    ifstream inFile(file_name);
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);

        Dependent p(
            j["Id"],
            j["ESSN"],
            j["DependentName"],
            ((string)j["Sex"])[0],
            j["BDate"],
            j["Relationship"], 
            );
        p.SetId(j["Id"]);
        _data.push_back(p);
        _MaxId= j["Id"];
    }
    inFile.close();

}
int DependentData::AddData(BaseObject* baseobject){
    Dependent* _DataAdd = (Dependent*) baseobject;
    _DataAdd->SetId(++_MaxId);
    _data.push_back(*_DataAdd);
    return _MaxId;
}
int DependentData::DeleteData(int essn){
    int f=-1;
    for(int i = 0; i<= _data.size(); i++){
        if(_data[i].GetESSN()==essn){
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
int DependentData::UpdateData(BaseObject* baseobject){
    Dependent* _Editdata = (Dependent*) baseobject;
    int i = _Editdata->GetId();
    _data[i-1] = *_Editdata;
    return 0;
}
vector<BaseObject*> DependentData::SelectAllData(){
    vector<BaseObject*> _outData;
    for(int i=0; i < _MaxId; i++){
        _outData.push_back(&_data[i]);
    }
    return _outData;
}
Employee DependentData::SelectData(int essn){
    for(int i = 0; i <= _data.size(); i++){
        if(_data[i].GetESSN() == essn){
            return _data[i];
        }
    }
    
    throw "SSN is not valid !";
}
int DependentData::PullFile(){
    ofstream outFile(file_name, ios::out);
    if(!outFile) return 0;
    for (Dependent e:_data){
        outFile << e.ToJson() << endl;
    }
    outFile.close();
    return 1;
}
int DependentData::GetMaxId(){
    return _MaxId;
}