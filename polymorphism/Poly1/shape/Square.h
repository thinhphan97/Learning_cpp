#ifndef _shape_Square_h_
#define _shape_Square_h_
#include "Rectangle.h"
// using namespace std;
class Square : public Rectangle
{
public:
    Square(float a = 0);
    void Input(istream& inDevice);
};
#endif