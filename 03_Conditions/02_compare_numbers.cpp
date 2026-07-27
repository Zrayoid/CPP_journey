#include<iostream>
using namespace std;

int main(){
    int firstNum ;
    int secondNum ;
    cout<<"Enter 2 Numbers\n";
    cout<<"Enter first Number:: ";
    cin>>firstNum;
    cout<<"Enter Second Number:: ";
    cin>>secondNum;
    if(firstNum > secondNum){
        cout<<"The first number is greater.";
    }
    else if(firstNum < secondNum){
        cout<<"The second number is greater.";
    }
    else
    cout<<"The Numbers are equal.";

    return 0;
}