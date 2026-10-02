#include <iostream>
#include <string>
using namespace std;

int main()
{
    string UserName;
    string Password;
    cout << "Enter your UserName. ";
    cin >> UserName;

    string name = "King";
    string password = "@1#";

    if (UserName == name)
    {
        cout << "Enter Your Password. ";
        cin >> Password;
        
        if (Password == password)
        {
            cout << " Login Successful...";
        }
        else
            cout << " Incorrect Password..";
    }
    else
        cout << " User Not Found..";

    return 0;
}
