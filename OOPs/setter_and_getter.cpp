#include <iostream>
#include <string>
using namespace std;

class Bank{
    private:
        float balance = 1000;
    public:
        void deposit(float amount)
        {
            if( amount > 0)
            {
                balance += amount;
            }
        }

        void withdraw(float amount)
        {
            if ( amount <= balance && amount > 0)
            {
                balance -= amount;            }
        }

        float getBalance()
        {
            return balance;
        }
};

int main()
{   
    Bank b;
    b.deposit(500);
    cout << " Balance is: " << b.getBalance() << endl;
    b.withdraw(300);
    cout << " Balance is: " << b.getBalance() << endl;
    b.withdraw(2000);
    cout << " Balance is: " << b.getBalance() << endl;

    return 0;
}