#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float BankBalance, Deposite, Withdrawal;
    BankBalance = 10000;
    cout<<"Account Balance:: "<<BankBalance<<endl;
    Deposite = 5000;
    cout<<"5000 deposited in your account.\n";
    BankBalance = BankBalance+Deposite;
    cout<<"Now the Account Balance:: "<<BankBalance<<endl;
    Withdrawal = 2000;
    cout<<"2000 Withdrawn from your account.\n";
    cout<<"Account Balance:: "<<BankBalance - Withdrawal<<endl;

    return 0;
}
