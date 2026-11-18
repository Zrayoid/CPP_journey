#include <iostream>
#include <string>
using namespace std;

class Product
{
    private:
        string name;
        float price;
        int quantity;

    public:
        Product (string n, float p, int q) :
                name(n), price(p >= 0 ? p : 0), quantity(q >= 0 ? q : 0) {}

        void restock ( int amount )
        {
            if ( amount > 0)
            {
                quantity += amount;
            }
        }

        void sell ( int amount )
        {
            if ( amount > 0 && amount <= quantity)
            {
                quantity -= amount;
            }
            else
                cout << " We only have: " << quantity << " Products\n"; 
        }

        void display()
        {
            cout << " Product: "<< name << endl;
            cout << " Quantity: "<< quantity << endl;
            cout << " Price: "<< price << endl;
        }

        // copy constructor
        Product ( const Product& other)
        {
            name = other.name;
            price = other.price;
            quantity = other.quantity;
        }

        ~Product(){};
};


int main()
{
    
    Product p1("Keyboard", 1500, 10);
    Product p2 = p1;
    p1.sell(3);
    p2.restock(5);

    p1.display();
    p2.display();

    return 0;
}