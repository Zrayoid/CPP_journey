#include <iostream>
#include <string>
using namespace std;

class Player
{   
    private:
        int* health;
    public:
        Player (int h) : health ( new int(h) ) {}

        
        void takeDamage()
        {
            *health = *health - 50;
        }
        
        void displayHealth()
        {
            cout << " Health: "<< *health << endl;
        }
        
        Player ( const Player& other)
        {
            health = new int(*other.health);
            cout << " Deep Copy constructor operator" << endl;
            
        }
        
        Player& operator= ( const Player& another)
        {
            if ( this == &another)
            {
                cout << " Self Assignment"<< endl;
                return *this;

            }
            else
            {
                int* temp = new int(*another.health);
                delete health;
                health = temp;
                cout << " Deep Copy assignment operator" << endl;
                return *this;
            }
        }
        
        ~Player ()
        {
            delete health;
        }
    };

int main()
{

    Player p1(100);
    p1.displayHealth();
    cout << endl;

    Player p2 = p1;
    p2.takeDamage();
    p2.displayHealth();
    cout << endl;
    p1.displayHealth();
    
    cout << endl;
    Player p3(200);
    p3.takeDamage();
    p1 = p3;
    p1.displayHealth();
    cout << endl;
    p3.displayHealth();
    return 0;
}