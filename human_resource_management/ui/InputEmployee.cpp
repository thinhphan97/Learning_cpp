#include "InputEmployee.h"

InputEmployee::Employee(){};

Employee InputEmployee::InputData(){
    int id; 
    string fname; 
    string minit; 
    string lname; 
    long ssn; 
    string bdate; 
    string adress; 
    char sex; 
    int salary;
    long superSSN; 
    int dno;
    cout << "Enter id :";
    cin >> id;
    cout << "Enter First Name :";
    cin >> fname;
    cout << "Enter Mid init :";
    cin >> minit;
    cout << "Enter last name :";
    cin >> lname;
    cout <<"Enter SSN:";
    cin >> ssn;
    cout <<"Enter Birth date :";
    cin >> bdate;
    cout >>"Enter address :";
    cin << adress;
    cout << "Enter sex :";
    cin >> sex;
    cout << "Enter salary :";
    cin >> salary;
    cout << "Enter super SSN :";
    cin >> superSSN;
    cout << "Enter dno:";
    cin >> dno;
    Employee e(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno);
    return e;
};
