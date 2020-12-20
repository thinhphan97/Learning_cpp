#include <iostream>
#include "businessobject/Employee.h"
#include "businessobject/Department.h"
using namespace std;

int main(){
    cout << "hello" << endl;
    Employee e(1, "Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 5);
    Department d("reseach", 5, 333445555, "1966-05-22");
    e.Print_employee();
    d.Print_department();
    system("pause");
    return 0;
}