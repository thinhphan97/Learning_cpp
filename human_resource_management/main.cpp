#include <iostream>
#include "businessobject/Employee.h"
#include "dataaccess/EmployeeData.h"
using namespace std;

int main(){
    cout << "hello" << endl;
    Employee e1(1, "John", "B", "Smith", 123456789, "1965-01-09", "houton,TX", 'M', 30000, 33344555, 5);
    Employee e2(2, "Franklin", "T", "Wong", 33344555,"1965-12-08","houston,TX", 'M', 40000, 888665555, 5);
    Employee e3(3, "Alica","J", "Zelaya", 999887777,"1968-07-19", "spring,TX",'F',2500, 987654321, 4);
    Employee e4(4, "Jenifer", "S", "walace", 987654321, "1941-06-20","bellaire,TX", 'F', 4300,888665555,4);
    EmployeeData e;
    e.PushBack(e1);
    e.PushBack(e2);
    e.PushBack(e3);
    e.PushBack(e4);

    for(int i = 0; i< e.GetMaxId(); i++){
        Employee* f = e.GetPointer(i);
        cout << f->Printdata()<< endl;
    }
    for(int i = 0; i< e.GetMaxId(); i++){
        cout << e.Getdata(i).Printdata()<< endl;
    }
    Employee* f = e.GetPointer(2);
    if (f == nullptr){
        cout << "can not get Employee" << endl;
    }
    else{
         cout << f->GetId() << endl;
    }
    return 0;
}