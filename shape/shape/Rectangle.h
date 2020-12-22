#ifndef _shape_Rectangle_h_
#define _shape_Rectangle_h_
#include <iostream>
using namespace std;

class Rectangle
{
protected:
    float width, height;
public:
    Rectangle();
    Rectangle(float w, float h);
    void setw(float w);
    void seth(float h);
    float Area();
    void Input(istream& inDevice);
};
#endif