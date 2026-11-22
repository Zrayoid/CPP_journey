#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    int *health;

public:
    Player(int h) : health(new int(h)) {}

    void takeDamage()
    {
        *health = *health - 50;
    }

    void displayHealth()
    {
        if ( health == nullptr)
        {
            cout << " NULL ptr"<< endl;
        }
        else
        {
            cout << " Health: " << *health << endl;
        }
    }

    Player(const Player &other)
    {
        health = new int(*other.health);
        cout << " Deep Copy constructor operator" << endl;
    }

    Player &operator=(const Player &another)
    {
        if (this == &another)
        {
            cout << " Self Assignment" << endl;
            return *this;
        }
        else
        {
            int *temp = new int(*another.health);
            delete health;
            health = temp;
            cout << " Deep Copy assignment operator" << endl;
            return *this;
        }
    }

    Player ( Player&& other)
    {
        health = other.health;
        other.health = nullptr;
    }

    Player& operator= ( Player&& other )
    {
        if ( this == &other)
        {
            return *this;
        }
        else
        {
            delete health;
            health = other.health;
            other.health = nullptr;
            return *this;
        }
    }

    ~Player()
    {
        delete health;
    }
};

int main()
{

    Player p1(100);
    Player p3(200);
    Player p2 = std::move(p1);
    p1.displayHealth();
    p2.displayHealth();

    p1 = move(p3);
    p1.displayHealth();
    p3.displayHealth();


    return 0;
}