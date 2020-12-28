#ifndef  _businessobject_Employee_h_
#define  _businessobject_Employee_h_
#include <string>
#include "../libs/json.hpp"
using json = nlohmann::json;

using namespace std;
class Employee{
private:
    int Id;
    string Fname, Minit, Lname;
    long SSN;
    string Bdate, Adress;
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;
public:
    Employee();
    Employee(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno);
    int GetId();
    long GetSSN();
    string Printdata();
    json ToJson();
//protected:
    void SetFname(string);
    void SetMinit(string);
    void SetLname(string);
    void SetSSN(long);
    void SetBdate(string);
    void SetAdress(string);
    void SetSex(char);
    void SetSalary(int);
    void SetSuperSSN(long);
    void SetDNO(int);
    friend void UpdateEmployee(Employee& e,int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno);
};
#endif
