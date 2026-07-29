#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter Number to be checked. ";
    cin >> number;

    if( number % 2 == 0 ) cout << "Number is divisible by 2."<<endl;
        
    if ( number % 3 == 0 )  cout << "Number is divisible by 3."<<endl;

    if ( number % 5 == 0 )  cout << "Number is divisible by 5."<<endl;

    return 0;
}
