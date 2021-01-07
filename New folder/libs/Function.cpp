#include "Function.h"
#include <algorithm>

string Function::ReplaceAll(string s,const char& search, const char& replace){
    for_each(s.begin(),s.end(),[&search, &replace](char& i){
        if(i == search){
            i = replace;
        }
    });
    return s;
}