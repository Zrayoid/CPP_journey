#include <iostream>
using namespace std;

enum Signals
{
    Red = 1,
    Yellow,
    Green
};

int main()
{
    int choice;
    cout << " Enter Signal(1 - 3): ";
    cin >> choice;

    switch (choice)
    {
        case Red:
            cout << " Stop "<< endl;
            break;

        case Yellow:
            cout << " Wait "<< endl;
            break;
        
        case Green:
            cout << " Go "<< endl;
            break;
        default:
            cout << " Invalid input.";
            break;
    
    }


    return 0;
}
