#ifndef Project_businessobject_Employee_h_
#define Project_businessobject_Employee_h_
#include <string>
#include "BaseObject.h"
#include "../libs/json.hpp"
using json = nlohmann::json;

using namespace std;

class Employee:public BaseObject{
    private:
        int Id;//id is increasing number
        string FName, MInit, LName; //fname, minit, lname are the full name of employee
        long SSN;// ssn is employee identification number
        string BDate, Adress; // Bdate and Adress are birth day and adress of employee
        char Sex;//sex of the employee
        int Salary;// salary of the employee
        long SuperSSN;//superSSN is the manager of the employee
        int DNO;//dno is Department staff are doing
    public:
        Employee();//The constructor takes no parameters of class
        Employee(string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno);//the constructor take parameters of the object
        Employee(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno);//the constructor take parameters of the object
        void SetId(int Id);
        int GetId();
        void SetSubId();
        long GetSSN();
        string ConvertToString();
        json ToJson();
        
};

#endif