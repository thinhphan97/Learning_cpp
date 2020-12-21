#include<iostream>
#include"Figures.h"
using namespace std;

int main(){
    Point2D P;
    P.Set(1,2);
    P.Move(2.3,3.7);
    Circle C;
    C.Set(4,5,2);
    cout<< "Area :"<< C.Area()<<endl;
    cout<< "Perimeter: "<< C.Perimeter()<<endl;
    return 0;
}