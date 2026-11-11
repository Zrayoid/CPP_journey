#include <iostream>
#include <string>
using namespace std;

union Data
{
    int Number;
    float decimal;
    char letter;
};

int main()
{
    Data d;
    d.Number = 25;
    cout << " Number: " << d.Number << endl;
    cout << endl;

    d.decimal = 9.2;
    cout << " decimal: " << d.decimal << endl;
    cout << endl;
    
    d.letter = 'F';
    cout << " letter: " << d.letter << endl;

    return 0;
}
