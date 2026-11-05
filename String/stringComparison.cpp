#include<iostream>
#include<string>
using namespace std;

int main()
{
    string Firstword;
    string secondword;

    cout << " Enter the first word: "; 
    getline(cin, Firstword);
    cout << " Enter the second word: ";  
    getline(cin, secondword);

    if ( Firstword == secondword )
    {
        cout << " Both words are equal.\n";
        return 0;
    }
    else 
    {
        cout << " Both words are different.\n";
    }

    if ( Firstword < secondword )
    {
        cout << Firstword << " comes first.";
    }
    else
    {
        cout << secondword << " comes first.";
    }
}