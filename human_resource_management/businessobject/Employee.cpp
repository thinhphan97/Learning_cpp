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
void Employee::Print_employee(){
        cout<< Id <<" "<< Fname <<" "<< Minit <<" "<< Lname <<" "<< SSN <<" "<< Bdate <<" "<< Adress <<" "<< Sex <<" "<< Salary <<" "<< SuperSSN <<" "<< DNO << endl;
    }