#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << " Enter two numbers to perform bitwise Arithmetics .:";
    cin >> num1 >> num2;

    cout << ( num1 & num2 );
    cout << ( num1 | num2 );
    cout << ( num1 ^ num2 );

    return 0;
}
