#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence, word;
    int start_po, length;
    cout << " Enter a sentence: ";
    getline(cin,sentence);

    cout << " Enter the starting position for word to be inserted: ";
    cin >> start_po;
    cin.ignore();
    cout << " Enter the word: ";
    getline(cin, word);

    if ( start_po < 0 || start_po > sentence.length())
    {
        cout << " Invalid input .";
        return 0;
    }

    cout << sentence.insert(start_po, word ) << endl;

    cout << " Erase.";
    cout << " Enter the start_po: ";
    cin >> start_po;
    cout << " Enter the length: ";
    cin >> length;

    if ( start_po < 0 || start_po > sentence.length() || length < 0)
    {
        cout << " Invalid input .";
        return 0;
    }

    cout << sentence.erase(start_po, length) << endl;
    return 0;
}
