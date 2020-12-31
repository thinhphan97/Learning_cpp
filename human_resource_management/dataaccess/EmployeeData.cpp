#include "EmployeeData.h"
#include <fstream>
#include "../libs/json.hpp"
#include <iostream>
using json = nlohmann::json;

EmployeeData::EmployeeData(){
    _maxId = 0;
    _data.resize(0);
};

EmployeeData::EmployeeData(string filename){
    _maxId = 0;
    _data.resize(0);
    ifstream inFile(filename);
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
        _data.push_back(p);
        _maxId= j["Id"];
    }
    inFile.close();
   }
int EmployeeData::GetMaxId(){
    return _maxId;
}
int EmployeeData::PushBack(Employee e){
    if(_maxId < e.GetId()){
        _maxId = e.GetId();
    }
    _data.push_back(e);
    return _maxId;
}
int EmployeeData::DeleteSSN(long ssn){

    for(int i = 0; i<= _data.size(); i++){
        if(_data[i].GetSSN()==ssn){
            _data.erase(_data.begin()+i);
            return i;
        }
    }
    return -1;
}
Employee EmployeeData::Getdata(int i){
    return _data[i];
}
Employee* EmployeeData::GetPointer(int i){
    Employee* e = nullptr;
    if(i>=0 && i< _data.size())
        e = &_data[i];
    return e;
}
int EmployeeData::ExportToFile(string filename){
    ofstream outFile(filename, ios::out);
    if(!outFile) return 0;
    for (Employee e:_data){
        outFile << e.ToJson() << endl;
    }
    outFile.close();
    return 1;
}

Employee EmployeeData::EditSSN(long ssn,int choose,long intParameters){
    
}
Employee EmployeeData::EditSSN(long ssn,int choose,string stringParameters){

}
Employee EmployeeData::EditSSN(long ssn,int choose,char charParameters){

}
Employee EmployeeData::EditSSN(long ssn,int choose, char intParameters){

}