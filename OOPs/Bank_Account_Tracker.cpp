#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        int accountNumber;
        string holderName;
        float balance;
        static int totalAccounts;
        static float totalBankBalance;

        float validateBalance(float bal)
        {
            return bal >= 0 ? bal : 0;
        }

    public:

        BankAccount(int acNum, string Hname, float bal)
            : accountNumber(acNum), holderName(Hname), balance(validateBalance(bal))
            {
                totalAccounts++;
                totalBankBalance += balance;
            }

        void deposit(float amount)
        {
            if ( amount > 0 )
            {
                balance += amount;
                totalBankBalance += amount;
            }
        }

        void withdraw(float amount)
        {
            if ( amount <= balance && amount > 0)
            {
                balance -= amount;
                totalBankBalance -= amount;
            }
        }

        void display()
        {
            cout << " Account Holder's Name: " << holderName << endl;
            cout << " Account Number: " << accountNumber << endl;
            cout << " Balace: " << balance << endl;
        }

        static void displayBankSummary()
        {
            cout << " Total Accounts: " << totalAccounts << endl;
            cout << " Total Balance in the Bank: "<< totalBankBalance << endl;
        }

};

int BankAccount :: totalAccounts = 0;
float BankAccount :: totalBankBalance = 0;

int main()
{
    
    BankAccount :: displayBankSummary();

    BankAccount b1( 100, "Rex", 5000);
    BankAccount b2( 101, "Allen", 8000);
    BankAccount b3( 102, "Ren", 10000);

    b1.deposit(2000);
    b2.deposit(1500);

    b3.withdraw(500);

    b1.display();
    b2.display();
    b3.display();

    BankAccount :: displayBankSummary();
    
    return 0;
}