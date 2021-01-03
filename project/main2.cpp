#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include "libs/Functionplus.h"
using namespace std;
string EnReplace(string& s){
    for_each(s.begin(),s.end(),[](char& i){
        if(i==' ')
            i='_';
    });
    return s;
}
string DeReplace(string& s){
    for_each(s.begin(),s.end(),[](char& i){
        if(i=='_')
            i=' ';
    });
    return s;
}
int test1(){
    string s("phan van thinh 18-09-1997");
    s=EnReplace(s);
    cout<< s << endl;

    s=DeReplace(s);
    cout<< s;

}
istream& operator >> (istream& inDev, vector<float>& a){
	float temp;
	a.resize(0);
	while (inDev >> temp){
		a.push_back(temp);
	}
	return inDev;
}

ostream& operator << (ostream& outDev, vector<float>& a){
	for (int i=0; i<a.size(); i++){
		outDev << a[i] << " ";
	}
	cout << endl;
}
int test2(int argc, char** argv) {
	vector<float> a;
	cout << "Input: ";
	cin >> a;
	cout << "Result: ";
	cout << a;
	return 0;
}
string String2Upper(string& s){
	transform(s.begin(), s.end(), s.begin(),::toupper);

	return s;
}
int main(){
	string s("xin chao !");
	s = Functionplus::ReplaceAll(s,' ','_');
	cout<< s << endl;
	system("pause");
	return 0;
}
#include <direct.h>
int test4()
{
		mkdir("myfolder");
		return 0;
}