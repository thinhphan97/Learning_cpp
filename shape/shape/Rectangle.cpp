#include "Rectangle.h"

Rectangle::Rectangle(){};
Rectangle::Rectangle(float w, float h){
    width = w;
    height = h;
}
void Rectangle::setw(float w){
    width = w;
}
void Rectangle::seth(float h){
    height = h;
}
float Rectangle::Area(){
    return width*height;
}
void Rectangle::Input(istream& inDev){
    inDev>>width>>height;
}