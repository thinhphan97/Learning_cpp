#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(){}
Employee::Employee(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno){
    Id =id;
    Fname = fname;
    Minit = minit;
    Lname = lname;
    SSN = ssn;
    Bdate = bdate;
    Adress = adress;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}
int Employee::GetId(){
    return Id;
}
long Employee::GetSSN(){
    return SSN;
}
string Employee::Printdata(){
   string s;
   s += to_string(Id)+"|";
   s += Fname+"|";
   s += Minit+"|";
   s += Lname+"|";
   s += to_string(SSN)+"|";
   s += Bdate+"|";
   s += Adress+"|";
   s += string(1, Sex)+"|";
   s += to_string(Salary)+ "|";
   s += to_string(SuperSSN)+"|";
   s += to_string(DNO)+"|";
   return s;
}
json Employee::ToJson(){
    json e;
    e["Id"] = Id;
    e["Fname"] = Fname;
    e["Minit"] = Minit;
    e["Lname"] = Lname;
    e["SSN"] = SSN;
    e["Bdate"] = Bdate;
    e["Adress"] = Adress;
    e["Sex"] = string(1,Sex);
    e["Salary"] = Salary;
    e["SuperSSN"] = SuperSSN;
    e["DNO"] = DNO;

    return e;

}

void Employee::SetFname(string name){
    Fname = name;
}

void Employee::SetMinit(string minit){
    Minit = minit;
}

void Employee::SetLname(string lname){
    Lname = lname;
}

void Employee::SetSSN(long ssn){
    SSN = ssn;
}

void Employee::SetBdate(string bdate){
    Bdate = bdate;
}

void Employee::SetAdress(string adress){
    Adress = adress;
}

void Employee::SetSex(char sex){
    Sex = sex;
}

void Employee::SetSalary(int salary){
    Salary = salary;
}

void Employee::SetSuperSSN(long superssn){
    SuperSSN = superssn;
}

void Employee::SetDNO(int dno){
    DNO = dno;
}

// void UpdateEmployee(Employee& e, int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno){
//     e.Id =id;
//     e.Fname = fname;
//     e.Minit = minit;
//     e.Lname = lname;
//     e.SSN = ssn;
//     e.Bdate = bdate;
//     e.Adress = adress;
//     e.Sex = sex;
//     e.Salary = salary;
//     e.SuperSSN = superSSN;
//     e.DNO = dno; 
// }