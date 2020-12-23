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