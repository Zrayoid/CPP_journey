#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    cout<<"Value of a before swap  "<< a<<endl;
    cout<<"Value of b before swap  "<< b<<endl;
     
    a = a+b;
    b = a - b;
    a = a - b;

    cout<<"Value of a after swap  "<< a<<endl;
    cout<<"Value of b after swap  "<< b<<endl;

    return 0;
}
