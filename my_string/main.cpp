#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1("hello ");
    string str2="world !";
    string s;
    s= str1 + str2;
    cout << "the string :" << s <<endl;
    cout << "length of string :" << s.length() << endl;
    cout << "First character : " << s[0] << endl;
    int lastpos = s.length()-1;
    cout << "last character :" << s[lastpos] << endl;
    return 0;
}
