#include <iostream>
using namespace std;

int main()
{
    int Marks;
    cout << "Enter your Marks\n";
    cin >> Marks;
    if ( Marks >= 40 )
    {
        cout << "You Passed.";
    }
    else
        cout << "You Failed.";
   
    return 0;
}