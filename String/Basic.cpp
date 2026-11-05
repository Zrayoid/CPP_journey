#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout << " Enter your full Name: ";
    getline(cin, name);

    cout << name << endl;

    cout << " Size of the string is: "<< name.length() << endl;
    cout << " Size of the string is: "<< name.size() << endl;
}