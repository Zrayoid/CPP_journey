#include<iostream>
using namespace std;

int main(){
    int num1;
    int count = 0;

    cout << " Enter a Number. ";
    cin >> num1;

    while(num1 > 0)
    {
        count += num1 & 1;
        num1 >>= 1;
    }
    cout << count;
   
    return 0;
}
