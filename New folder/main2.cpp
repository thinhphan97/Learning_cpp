// #include "ui/MemberUi.h"
#include <direct.h>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;


void sort_map(map<int, int>& M) 
{ 
  
    // Declare vector of pairs 
    vector<pair<int, int> > A; 
  
    // Copy key-value pair from Map 
    // to vector of pairs 
    for (auto& it : M) { 
        A.push_back(it); 
    } 
  
    // Sort using comparator function 
    sort(A.begin(), A.end(),[](pair<int, int>& a, pair<int, int>& b) 
    {
    return a.second < b.second; 
    }); 
  
    // Print the sorted value 
    for (auto& it : A) { 
  
        cout << it.first << ' '
             << it.second << endl; 
    } 
} 
  
int main(){
    // MemberUi member("Database/Member.txt");
    // // member.MemberAdd();
    // member.MemberEdit();
    // member.MemberRead();
    // string file_name = "Database/";
    // string file_name2;
    // cout<< " enter name folder:"<<endl;
    // cin>>file_name2;
    // file_name += file_name2 +"/";
    // cout<<file_name;
    // const char* file_name1=file_name.c_str();
    // cout<<mkdir(file_name1);


    map<int,int> data;

    data.insert(pair<int, int>(111,9));
    data.insert(pair<int, int>(112,8));
    data.insert(pair<int, int>(113,7));
    data.insert(pair<int, int>(114,5));
    data.insert(pair<int, int>(115,6));
    data.insert(pair<int, int>(116,2));
    data.insert(pair<int, int>(117,1));
    data.insert(pair<int, int>(118,9));
    data.insert(pair<int, int>(119,3));
    data.insert(pair<int, int>(110,7));

    sort_map(data);
}