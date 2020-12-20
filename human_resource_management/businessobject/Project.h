#ifndef _businessobject_Project_h_
#define _businessobject_Project_h_

#include <string>

using namespace std;

class Project
{
    string Pname;
    int Pnumber;
    string Plocation;
    int Dnum;
public:
    Project();
    Project(string pname, int pnumber, string plocation, int dnum);
};



#endif