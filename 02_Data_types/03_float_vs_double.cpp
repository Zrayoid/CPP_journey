#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a = 0.1f;
    double b = 0.1;

    cout<<fixed<<setprecision(17);

    cout<<"float a = "<< a << endl;
    cout<<"double b = "<< b << endl;
    return 0;
}