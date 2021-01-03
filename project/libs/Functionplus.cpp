#include "Functionplus.h"
#include <algorithm>
using namespace std;
string Functionplus::StringToUpper(string s){
    
    transform(s.begin(), s.end(), s.begin(),::toupper);
    return s;
}
string Functionplus::ReplaceAll(string s, const char &search, const char &replace){
    for_each(s.begin(), s.end(),[&search,&replace](char& i){
        if(i==search){
            i=replace;
        }
    });
    return s;
}