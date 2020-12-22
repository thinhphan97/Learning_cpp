#ifndef _businessobject_Workson_h_
#define _businessobject_Workson_h_

class Workson
{
private:
    int ESSN, PNO;
    float Hours; 
public:
    Workson();
    Workson(int essn, int pno, int hours);
};
#endif