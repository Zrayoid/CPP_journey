#include <iostream>
using namespace std;

int main()
{
    int Number;
    cout << "Enter your Number:: ";
    cin >> Number;
    if (  (10 <= Number ) && (Number <= 100) )
    {
        cout << "It lies between 10 and 100";
    }
    else
        cout << "It is not in range.";
   
    return 0;
}