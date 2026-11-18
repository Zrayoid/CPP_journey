#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        string accountHolder;
        float balance = 0;

    public:

        BankAccount(string name, float initialBalance): 
                accountHolder(name), balance(initialBalance){}

        void deposit(float amount)
        {
            if ( amount > 0 )
            {
                balance += amount;
            }
        }

        void withdraw(float amount)
        {
            if ( amount > 0 && amount <= balance )
            {
                balance -= amount;
            }
        }

        void display()
        {
            cout << " Account Holder: "<< accountHolder << endl;
            cout << " Balance: " << balance << endl;
        }

        ~BankAccount()
        {
            cout << "Destroyed\n";
        }

};

int main()
{
    BankAccount acc1("Alex", 500), acc2("Sam", 10);
    acc1.deposit(3000);
    acc1.display();
    acc2.display();

    acc2.withdraw(200);
    acc1.display();
    acc2.display();
    return 0;
}