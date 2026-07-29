#include <iostream>
using namespace std;

int main()
{
    int adminpassword = 1234;
    int pass;
    cout << "Enter the system password = ";
    cin >> pass;

    if (adminpassword == pass){
        cout << "Access granted."<<endl;
    }
    else
        cout << "Access denied, Wrong password. ";

    return 0;
}
