#include <iostream>
#include <string>
#include <cstddef>
using namespace std;

struct book
{
    string title;
    string author;
    float price;
};

int main()
{
    book b1, b2;

    b1.title = "October Junction";
    b1.author = "Divy Prakash Dubey";
    b1.price = 200;

    b2.title = "Mushafir cafe";
    b2.author = "Divy Prakash Dubey";
    b2.price = 200;

    cout << b1.title << endl;
    cout <<  b1.author << endl;
    cout << b1.price << endl;

    cout << b2.title << endl;
    cout <<  b2.author << endl;
    cout << b2.price << endl;

    return 0;
}
