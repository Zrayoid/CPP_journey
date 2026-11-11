#include <iostream>
using namespace std;

enum Day
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday 
};

int main()
{
    int choice;
    cout << " Enter day(1 - 7) : ";
    cin >> choice;

    switch (choice)
    {
        case Monday:
            cout << " Monday " << endl;
            break;
        
        case Tuesday:
            cout << " Tuesday " << endl;
            break;
        
        case Wednesday: 
            cout << " Wednesday " << endl;
            break;

        case Thursday:
            cout << " Thurday " << endl;
            break;

        case Friday:
            cout << " Friday " << endl;
            break;

        case Saturday:
            cout << " Saturday "<< endl;
            break;

        case Sunday:
            cout << " Sunday "<< endl;
            break;
        
        default:
            cout << " Invalid input.";
            break;
    }

    return 0;
}
