#include <iostream>
using namespace std;

int main(){
    cout << "////////////////////////////////////////////////////////////////////////"<<endl;
    cout << "//                               Edit table                           //"<<endl;
    cout << "// 1. Edit First name.                                                //"<<endl;
    cout << "// 2. Edit midle name.                                                //"<<endl;
    cout << "// 3. Edit last name.                                                 //"<<endl;
    cout << "// 4. Edit SSN.                                                       //"<<endl;
    cout << "// 5. Edit Birth date.                                                //"<<endl;
    cout << "// 6. Edit Adress.                                                    //"<<endl;
    cout << "// 7. Edit Sex.                                                       //"<<endl;
    cout << "// 8. Edit Salary.                                                    //"<<endl;
    cout << "// 9. Edit super ssn.                                                 //"<<endl;
    cout << "// 10.Edit DNO.                                                       //"<<endl;
    cout << "////////////////////////////////////////////////////////////////////////"<<endl;
    int choose;
    do{
        cin >> choose;
        if(choose>10 && choose<1){
            cout << "nhap lai di ban";
        }
    }while(choose>10 && choose<1);

    // switch (choose)
    // {
    // case 1: 
    //     break;
    
    // default:
    //     break;
    // }


    // cout << "hello" << endl;
    // Employee e1(1, "John", "C", "Smith", 123456789, "1965-01-09", "houton,TX", 'M', 30000, 33344555, 5);
    // Employee e2(2, "Franklin", "T", "Wong", 33344555,"1965-12-08","houston,TX", 'M', 40000, 888665555, 5);
    // Employee e3(3, "Alica","J", "Zelaya", 999887777,"1968-07-19", "spring,TX",'F',2500, 987654321, 4);
    // Employee e4(4, "Jenifer", "S", "walace", 987654321, "1941-06-20","bellaire,TX", 'F', 4300,888665555,4);
    // EmployeeData e;
    // e.PushBack(e1);
    // e.PushBack(e2);
    // e.PushBack(e3);
    // e.PushBack(e4);
    return 0;

}