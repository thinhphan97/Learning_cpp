#ifndef Project_libs_Functionplus_h_
#define Project_libs_Functionplus_h_
#include <string>

using namespace std;
class Functionplus
{

public:
    static string StringToUpper(string s); 
    static string ReplaceAll(string s, const char &search, const char &replace);
};
#endif