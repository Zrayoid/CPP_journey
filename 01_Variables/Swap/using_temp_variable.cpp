#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int c = 0;
    cout<<"Value of a before swap  "<< a<<endl;
    cout<<"Value of b before swap  "<< b<<endl;
    cout<<"Value of c before swap  "<< c<<endl;  
     
    c = a;
    a = b;
    b = c;
    cout<<endl;
    cout<<endl;
    cout<<"Value of a after swap  "<< a<<endl;
    cout<<"Value of b after swap  "<< b<<endl;
    cout<<"Value of c after swap  "<< c<<endl;

  return 0;
}
