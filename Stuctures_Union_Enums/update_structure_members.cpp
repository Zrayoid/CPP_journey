#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct book
{
    string title;
    string author;
    float price;
};

void displaybook(book &b)
{
    b.price = 999;
    cout << " BOOK Name: " << b.title << endl;
    cout << " BOOK Author: " << b.author << endl;
    cout << " BOOK Price: " << b.price << endl;
}

int main()
{
    book b1, b2;

    cout << " Book entery 1 " << endl;
    cout << " Enter the Name of book: ";
    getline(cin, b1.title);
    cout << " Enter the Name of author: ";
    getline(cin, b1.author);
    cout << " Enter the price: ";
    cin >> b1.price;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;

    cout << " Book entry 2 " << endl;
    cout << " Enter the Name of book: ";
    getline(cin, b2.title);
    cout << " Enter the Name of author: ";
    getline(cin, b2.author);
    cout << " Enter the price: ";
    cin >> b2.price;

    cout << endl;
    displaybook(b1);
    
    cout << "Original price: " << b1.price << endl;
    displaybook(b2);

    int number;
    cout << " Which entry you want to update: ";
    cin >> number;

    if (number == 1)
    {
        cout << " Enter new price: ";
        cin >> b1.price;

        displaybook(b1);
    }
    else if (number == 2)
    {
        cout << " Enter new price: ";
        cin >> b2.price;

        displaybook(b2);
    }
    else
        cout << " Invalid entry.";
    return 0;
}
