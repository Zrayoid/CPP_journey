#include<iostream>
#include<limits>
using namespace std;

int main(){
    unsigned b = numeric_limits<unsigned>::max();
    signed c = numeric_limits<signed>::max();

    unsigned a = -1;
    signed d = 3;
    cout<<b<< endl;
    cout<<c<< endl;
    cout<<a<<endl;
    cout<<d<<endl;

    return 0;
}
