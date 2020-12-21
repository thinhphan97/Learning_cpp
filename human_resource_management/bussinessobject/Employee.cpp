#include"Employee.h"
#include<string>

Employee::Employee(){}
Employee::Employee(int id, string fname,string minit,string lname, long ssn, string bdate, string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    Fname = fname;
    Minit = minit;
    Lname = lname;
    SSN = ssn;
    Bdate = bdate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
    }