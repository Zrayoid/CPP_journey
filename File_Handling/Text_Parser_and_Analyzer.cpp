#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cctype>
using namespace std;

int main()
{
    string line;
    string concate = "";
    string word;
    bool alphaFound;
    bool digitFound;
    bool punctFound;

    ifstream file;
    file.open("input.txt");

    if (file.is_open())
    {
        cout << "File opened.\n";

        while (getline(file, line))
        {
            if (!concate.empty())
            {
                concate += '\n';
            }
            concate += line;
        }
        file.close();

        cout << concate;
        cout << "\nLength of the string is: " << concate.length();
        cout << endl;
        stringstream ss(concate);
        while (ss >> word)
        {
            cout << word << "\n";
            alphaFound = digitFound = punctFound = false;
            for (char ch : word)
            {
                if (isalpha(static_cast<unsigned char>(ch)))
                {
                    alphaFound = true;
                }
                else if (isdigit(static_cast<unsigned char>(ch)))
                {
                    digitFound = true;
                }
                else if (ispunct(static_cast<unsigned char>(ch)))
                {
                    punctFound = true;
                }
            }

            cout << boolalpha;
            cout << "Alphabet : " << alphaFound << endl
                 << "Digit : " << digitFound << endl
                 << "Punctuation : " << punctFound << endl;

            if ( alphaFound  && !digitFound && !punctFound )
            {
                cout << "Type: Alphabetic "<< endl;
            }
            else if ( !alphaFound  && digitFound  && !punctFound )
            {
                cout << "Type: Numeric "<< endl;
            } 
            else if ( !alphaFound && !digitFound && punctFound )
            {
                cout << "Type: Punctuation "<< endl;
            }
            else if ( alphaFound  && digitFound  && !punctFound )
            {
                cout << "Type: AlphaNumberic "<< endl;
            }
            else if ( (alphaFound  || digitFound ) && punctFound )
            {
                cout << "Type: Mixed  "<< endl;
            }
            else
                cout << "Type: Unrecognized" << endl; 

            cout << endl;
        }
    }
}