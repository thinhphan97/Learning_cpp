#include "Employee.h"

Employee::Employee(){};
Employee::Employee(string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno){
    this->FName = fname;
    this->MInit = minit;
    this->LName = lname;
    this->SSN = ssn;
    this->BDate = bdate;
    this->Adress = adress;
    this->Sex = sex;
    this->Salary = salary;
    this->SuperSSN = superSSN;
    this->DNO = dno;
};
Employee::Employee(int id,string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno){
    this->Id = id;
    this->FName = fname;
    this->MInit = minit;
    this->LName = lname;
    this->SSN = ssn;
    this->BDate = bdate;
    this->Adress = adress;
    this->Sex = sex;
    this->Salary = salary;
    this->SuperSSN = superSSN;
    this->DNO = dno;
};
void Employee::SetId(int Id){
    this->Id =Id;
}
int Employee::GetId(){
    return Id;
}
long Employee::GetSSN(){
    return SSN;
}
json Employee::ToJson(){
    json e;
    e["Id"] = Id;
    e["Fname"] = FName;
    e["Minit"] = MInit;
    e["Lname"] = LName;
    e["SSN"] = SSN;
    e["Bdate"] = BDate;
    e["Adress"] = Adress;
    e["Sex"] = string(1,Sex);
    e["Salary"] = Salary;
    e["SuperSSN"] = SuperSSN;
    e["DNO"] = DNO;

    return e;

}
void Employee::SetSubId(){
    --Id;
}
string Employee::ConvertToString(){
    string s;
    s += to_string(Id)+"|";
    s += FName+"|";
    s += MInit+"|";
    s += LName+"|";
    s += to_string(SSN)+"|";
    s += BDate+"|";
    s += Adress+"|";
    s += string(1, Sex)+"|";
    s += to_string(Salary)+ "|";
    s += to_string(SuperSSN)+"|";
    s += to_string(DNO)+"|";
    return s;
}