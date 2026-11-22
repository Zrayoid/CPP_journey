#include <iostream>
#include <string>
using namespace std;

class Character
{
    private:
        string name;
        float health;
    public:
        Character ( string Name, float Health)
            : name (Name), health (Health) {}

        void displayStats ()
        {
            cout << " Player Name: " << name << endl;
            cout << " Health: " << health << endl;
        } 
};


class Weapon
{
    private:
        string weaponName;
        float weaponDamage;
    public:
        Weapon ( string wepName, float wepDamage )
            : weaponName(wepName), weaponDamage(wepDamage) {}

        void attack ()
        {
            cout << " Weapon: "<< weaponName << endl; 
            cout << " Attack: "<< weaponDamage << endl; 
        }
};

class Player : public Character
{
    Weapon wep;
    public:
        Player ( string name, float health, string wepName, float Damage) 
            : Character(name, health), wep(wepName, Damage) 
            { cout << " Player created" << endl; } 

        void playerAttack()
        {
            cout << " Attack" << endl;
            wep.attack();
        }
};

int main()
{
    Player p("Alex", 2000, "Sword", 1600);

    p.displayStats();
    p.playerAttack();

    return 0;
}