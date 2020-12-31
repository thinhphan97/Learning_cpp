#ifndef _Figure_h_
#define _Figure_h_
#include <vector>
#include "DisplayResolution.h"
using namespace std;

class Figure
{
public:
    Figure();
    virtual vector<int,int> Draw(DisplayResolution displayResolution);
};


#endif