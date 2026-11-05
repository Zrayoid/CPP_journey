#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string sentence;
    int letters, digits, uppers, lowers, spaces;
    letters = digits = uppers = lowers = spaces = 0;
    cout << " Enter a sentence: ";
    getline(cin,sentence);

    for ( int i = 0; i < sentence.length(); i++)
    {
        if ( isalpha(sentence[i]))
        {
            letters++;
        }
        else if( isdigit(sentence[i]))
        {
            digits++;
        }

        if ( isupper(sentence[i]))
        {
            uppers++;
        }
        else if ( islower(sentence[i]))
        {
            lowers++;
        }
        
        if (isspace(sentence[i]))
        {
            spaces++;
        }  

        sentence[i] = toupper(sentence[i]);
    }

    cout << " Letters: "<< letters << endl
         << " Digits: "<< digits << endl
         << " Uppers: "<< uppers << endl
         << " Lowers: "<< lowers << endl
         << " spaces: "<< spaces << endl;
    cout << sentence;
    return 0;
}
