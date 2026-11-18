#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string title;
        float price;

    public:

        Book(string n, float c) : title(n), price(c) {}

        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
        }

        Book(const Book& other)
        {
            title = other.title;
            price = other.price;
        }

    
};

int main()
{   
    Book book1("C++ Primer", 500);
    Book book2 = book1;

    book1.display();
    book2.display();

    return 0;
}