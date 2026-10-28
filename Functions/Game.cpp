#include <iostream>
using namespace std;

void Stats(int &Health, int &Armor, int Damage)
{
    if (Damage <= (Health+Armor))
    {

        if (Damage >= Armor)
        {
            Damage = Damage - Armor;
            Health = Health - Damage;
            Armor = 0;
        }
        else
        {
            Armor -= Damage;
        }
    }
    else
    {
        Health = 0;
        Armor = 0;
    }
}

int main()
{
    int Health = 100;
    int Armor = 30;
    int Damage;
    cout << " Enter the Damage: ";
    cin >> Damage;

    Stats(Health, Armor, Damage);

    if (Health == 0 & Armor == 0)
    {
        cout << " Character Died...";
    }
    else
    {
        cout << "Health : " << Health;
        cout << "\nArmor : " << Armor;
    }

    return 0;
}
