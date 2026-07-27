#include <iostream>
using namespace std;

int main()
{
    int Age;
    cout << "Enter your Age\n";
    cin >> Age;
    if ( Age >= 18 )
    {
        cout << "You are an Adult.";
    }
    else
        cout << "You are a minor.";
   
    return 0;
}