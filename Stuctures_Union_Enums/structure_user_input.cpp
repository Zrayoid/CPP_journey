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

int main()
{
    book b1, b2;

    cout << " Book entery 1 "<< endl;
    cout << " Enter the Name of book: ";
    getline(cin,b1.title);
    cout << " Enter the Name of author: ";
    getline(cin,b1.author);
    cout << " Enter the price: ";
    cin >> b1.price;
    
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;

    cout << " Book entery 2 "<< endl;
    cout << " Enter the Name of book: ";
    getline(cin,b2.title);
    cout << " Enter the Name of author: ";
    getline(cin,b2.author);
    cout << " Enter the price: ";
    cin >> b2.price;
    
    
    return 0;
}
