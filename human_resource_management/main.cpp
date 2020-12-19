#include <iostream>
#include "businessobject/Employee.h"
using namespace std;

int main(){
    cout << "hello" << endl;
    Employee e(1, "Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 5);
    e.Print_employee();
    return 0;
}