#include "ProjectData.h"
#include <fstream>
#include <algorithm>
#include "../libs/json.hpp"
#include "../libs/Functionplus.h"

using namespace std;
using json = nlohmann::json;

ProjectData::ProjectData(/* args */){
    _MaxId = 0;
    _data.resize(0);
}
ProjectData::ProjectData(string file_name){
    _MaxId = 0;
    _data.resize(0);
    this->file_name = file_name;
}
void ProjectData::ReadData(){
    ifstream inFile(file_name);
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);
        Project p(
            j["Id"],
            j["PName"],
            j["PNumber"],
            j["PLocation"],
            j["DNum"]
            );
        p.SetId(j["Id"]);
        _data.push_back(p);
        _MaxId= j["Id"];
    }
    inFile.close();
}
int ProjectData::AddData(BaseObject* baseobject){
    Project* _DataAdd = (Project*) baseobject;
    _DataAdd->SetId(++_MaxId);
    _data.push_back(*_DataAdd);
    return _MaxId;
}
int ProjectData::DeleteData(string PName){
    int f=-1;
    for(int i = 0; i<= _data.size(); i++){
        if(Functionplus::StringToUpper(_data[i].GetPName()) == Functionplus::StringToUpper(PName)){
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
int ProjectData::UpdateData(BaseObject* baseobject){
    Project* _Editdata = (Project*) baseobject;
    int i = _Editdata->GetId();
    _data[i-1] = *_Editdata;
    return 0;
}
vector<BaseObject*> ProjectData::SelectAllData(){
    vector<BaseObject*> _outData;
    for(int i=0; i < _MaxId; i++){
        _outData.push_back(&_data[i]);
    }
    return _outData;
}
Project ProjectData::SelectData(string PName){
    for(int i = 0; i <= _data.size(); i++){
        if(Functionplus::StringToUpper(_data[i].GetPName())== Functionplus::StringToUpper(PName)){
            return _data[i];
        }
    }
    
    throw "SSN is not valid !";
}
int ProjectData::PullFile(){
    ofstream outFile(file_name, ios::out);
    if(!outFile) return 0;
    for (Project e:_data){
        outFile << e.ToJson() << endl;
    }
    outFile.close();
    return 1;
}
int ProjectData::GetMaxId(){
    return _MaxId;
}