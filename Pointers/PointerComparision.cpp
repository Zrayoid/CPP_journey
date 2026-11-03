#include<iostream>
using namespace std;

int main(){
    int a = 100;
    int b = 200;

    int* ptr = &a;
    cout << " Value of ptr is: "<< ptr << endl;
    ptr = &b;
    cout << " Value of ptr is: "<< ptr << endl;

    cout << ( ptr == &b );
    
    return 0;
}
