#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << " Enter 2 Numbers to Swap.";
    cin >> num1 >> num2;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout << " After swap:: " << num1 << " " << num2;

   
    return 0;
}
