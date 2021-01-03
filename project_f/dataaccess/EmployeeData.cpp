#include "EmployeeData.h"
#include <fstream>
#include <algorithm>
#include "../libs/json.hpp"
#include <iostream>
#include <string>

using namespace std;
using json = nlohmann::json;

EmployeeData::EmployeeData(){
    _MaxId = 0;
    _data.resize(0);
};
EmployeeData::EmployeeData(string file_name){
    _MaxId = 0;
    _data.resize(0);
    this->file_name = file_name;
};
void EmployeeData::ReadData(){
    
    ifstream inFile(file_name);
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);

        Employee p(
            j["Id"],
            j["Fname"],
            j["Minit"],
            j["Lname"],
            j["SSN"],
            j["Bdate"],
            j["Adress"],
            ((string)j["Sex"])[0],
            j["Salary"],
            j["SuperSSN"],
            j["DNO"] 
            );
        p.SetId(j["Id"]);
        _data.push_back(p);
        _MaxId= j["Id"];
    }
    inFile.close(); 
}
int EmployeeData::AddData(BaseObject* baseobject){
    Employee* _DataAdd = (Employee*) baseobject;
    _DataAdd->SetId(++_MaxId);
    _data.push_back(*_DataAdd);
    return _MaxId;
}
int EmployeeData::DeleteData(long SSN){
    int f=-1;
    for(int i = 0; i<= _data.size(); i++){
        if(_data[i].GetSSN()==SSN){
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
int EmployeeData::UpdateData(BaseObject* baseobject){
    Employee* _Editdata = (Employee*) baseobject;
    int i = _Editdata->GetId();
    _data[i-1] = *_Editdata;
    return 0;
}
vector<BaseObject*> EmployeeData::SelectAllData(){  
    vector<BaseObject*> _outData;
    for(int i=0; i < _MaxId; i++){
        _outData.push_back(&_data[i]);
    }
    return _outData;
}
Employee EmployeeData::SelectData(long SSN){
    for(int i = 0; i <= _data.size(); i++){
        if(_data[i].GetSSN()==SSN){
            return _data[i];
        }
    }
    
    throw "SSN is not valid !";
}
int EmployeeData::PullFile(){
    ofstream outFile(file_name, ios::out);
    if(!outFile) return 0;
    for (Employee e:_data){
        outFile << e.ToJson() << endl;
    }
    outFile.close();
    return 1;
}
int EmployeeData::GetMaxId(){
    return _MaxId;
}