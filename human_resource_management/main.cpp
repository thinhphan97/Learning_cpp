#include <iostream>
#include <conio.h>
#include "businessobject/Employee.h"
#include "dataaccess/EmployeeData.h"
#include "ui/InputEmployee.h"
using namespace std;

int main(){
    EmployeeData e("Employee.data");

    InputEmployee In;
    Employee f;
    f = In.InputData();

    e.PushBack(f);

    for(int i = 0; i< e.GetMaxId(); i++){
        Employee* f = e.GetPointer(i);
        cout << f->Printdata()<< endl;
        cout << "--------------------------------------------------------------------------" << endl;
    }
    cout <<"enter the employee number to delete : ";
    long ssn;
    cin >>ssn;  

    if(e.DeleteSSN(ssn) != -1){
        cout <<"delete "<< ssn <<" finish !"<< endl;
    }


    if(e.ExportToFile("Employee.data")==1){
        cout << "save file success !!";
    }else{
        cout << "save file fails !!";
    };
    return 0;
}