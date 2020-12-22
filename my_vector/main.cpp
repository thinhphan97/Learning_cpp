#include <iostream>
#include <vector>

using namespace std;

int simple_vector(){
    int n;
    vector <float> a;

    cout << "enter array size:"<< endl;
    cin >> n;

    if(n<1){
        cout << "invalid size !!";
        return 0;
    } 
    a.resize(n);
    for(int i = 0; i< n; i++){
        cout <<"a["<< i <<"] = ";
        cin >> a[i];
    }
    cout << "data"<<endl;
    for (float f:a){
        cout << f << endl;
    }
    return 0;
}
istream& operator >>(istream& idev, vector<float> &a){
    float temp;
    a.resize(0);
    while(idev >> temp){
        a.push_back(temp);
    }
    return idev;
}
ostream& operator <<(ostream& odev, vector<float> &a){
    for(float f:a){
        odev << f <<" "<< endl;
    }
    return odev;
}
int main(){

    vector<float> a;
    cout << "Input:"<< endl;
    cin >> a;
    cout << "Output :";
    cout << a;
    return 0;
}