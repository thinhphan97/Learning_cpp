#include "shape/Rectangle.h"
#include "shape/Square.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Rectangle rec;
    // Square sq;
    // cout<< "rectangle's size(width and height):";
    // rec.Input(cin);
    // cout<< "rectangle's area = "<< rec.Area()<<std::endl;

    // cout<< "square's size:";
    // sq.Input(cin);
    // cout<< "square's area = "<<sq.Area()<<std::endl;
    
    Rectangle* prec;
    prec = new Square();
    prec ->Input(cin);
    cout << prec->Area() << endl;







    // cout << "hello world ";
    // vector<Rectangle> rec;
    // float w;
    // float h;
    // cout << "hello world ";
    // cin >> w >> h;
    // cout << "hello world ";
    // Rectangle r;
    // cout << "hello world ";
    // r.Input(cin);
    // cout << r.Area();
    // rec.push_back(r);
    // cout << r.Area();

    return 0;
}
