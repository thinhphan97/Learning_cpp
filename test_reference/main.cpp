#include <iostream>
#include "Myclass.h"
using namespace std;

int main(){
    Myclass i;
    i.Set(5);
    cout << "i = "<< i.Get()<< endl;

    Myclass j(i);
    cout << "j = "<< j.Get()<< endl;

    j.Set(6);
    cout << "i = "<< i.Get()<< endl;
    cout << "j = "<< j.Get()<< endl;
    return 0;
}