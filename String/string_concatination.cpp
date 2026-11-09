#include<iostream>
#include<string>
using namespace std;

int main()
{
    string Firstname;
    string Lastname;
    cout << " Enter the first name: ";
    cin >> Firstname;
    cout << " Enter the last name: ";
    cin >> Lastname;

    cout << " Full Name: "<< Firstname+" "+Lastname;
    Lastname += '!';
    cout << endl;
    cout << " Final Name: "<< Firstname+" "+Lastname;
    // adds 2 string2
    
    
}
