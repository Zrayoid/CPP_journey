#include <iostream>
using namespace std;

void Bank(int &Balance, int Amount)
{
    if (Amount < 0)
    {
        if (Balance >= -Amount)
        {
            Balance += Amount;
        }
    }
    else
    {
        Balance += Amount;
    }
}

int main()
{
    int money;
    int savings = 500;

    cout << " Use negative sign for withdrawal.\n";
    cout << " Enter the Amount: ";
    cin >> money;

    Bank(savings, money);

    cout << " Savings: " << savings << "\n";

    return 0;
}
