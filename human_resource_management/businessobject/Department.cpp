#include "Department.h"
#include <iostream>

using namespace std;

Department::Department(){};
Department::Department(string dname, int dnumber, int mgrSSN, string mgrstartdate){
    Dname = dname;
    Dnumber = dnumber;
    MgrSSN = mgrSSN;
    Mgrstartdate = mgrstartdate;
}
void Department::Print_department(){
    cout<<Dname<<" "<<Dnumber<<" "<<MgrSSN<<" "<<Mgrstartdate<< endl;
}