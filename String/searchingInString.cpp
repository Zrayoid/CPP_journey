#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence, search;
    cout << " Enter a sentece: ";
    getline(cin, sentence);

    cout << " Enter the word or aphabet to search: ";
    getline(cin, search);
    
    if ( sentence.find(search) == string::npos )
    {
        cout << "Not found!";
    }
    else
    {
        cout << " Found at index: "<< sentence.find(search) << endl;
        cout << " Found at index from right: "<< sentence.rfind(search);

    }

    return 0;
}