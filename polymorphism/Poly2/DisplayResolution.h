#ifndef _DisplayResolution_h_
#define _DisplayResolution_h_
class DisplayResolution
{
private:
    int maxWidth, maxheight;
public:
    DisplayResolution();
    DisplayResolution(int maxWidth,int maxheight);
    int getMaxwidth(int maxWidth);
    int getMaxheight(int maxheight);
};



#endif