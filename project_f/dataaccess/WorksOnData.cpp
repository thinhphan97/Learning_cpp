#include "WorksOnData.h"
#include <fstream>
#include <algorithm>
#include "../libs/json.hpp"
#include <iostream>
#include <string>

using namespace std;
using json = nlohmann::json;

WorksOnData::WorksOnData(){
    _MaxId = 0;
    _data.resize(0);
}
WorksOnData::WorksOnData(string file_name){
    _MaxId = 0;
    _data.resize(0);
    this->file_name = file_name;
}
void WorksOnData::ReadData(){
ifstream inFile(file_name);
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);

        WorksOn p(
            j["Id"],
            j["ESSN"],
            j["PNO"],
            j["Hours"]);
        p.SetId(j["Id"]);
        _data.push_back(p);
        _MaxId= j["Id"];
    }
    inFile.close(); 
}
int WorksOnData::AddData(BaseObject* baseobject){
    WorksOn* _DataAdd = (WorksOn*) baseobject;
    _DataAdd->SetId(++_MaxId);
    _data.push_back(*_DataAdd);
    return _MaxId;
}
int WorksOnData::DeleteData(int essn){
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
int WorksOnData::UpdateData(BaseObject* baseobject){
    WorksOn* _Editdata = (WorksOn*) baseobject;
    int i = _Editdata->GetId();
    _data[i-1] = *_Editdata;
    return 0;
}
vector<BaseObject*> WorksOnData::SelectAllData(){
    vector<BaseObject*> _outData;
    for(int i=0; i < _MaxId; i++){
        _outData.push_back(&_data[i]);
    }
    return _outData;
}
Employee WorksOnData::SelectData(int essn){
    for(int i = 0; i <= _data.size(); i++){
            if(_data[i].GetESSN()==essn){
                return _data[i];
            }
        }
        
        throw "SSN is not valid !";
}
int WorksOnData::PullFile(){
    ofstream outFile(file_name, ios::out);
    if(!outFile) return 0;
    for (WorksOn e:_data){
        outFile << e.ToJson() << endl;
    }
    outFile.close();
    return 1;
}
int WorksOnData::GetMaxId(){
    return _MaxId;    
}