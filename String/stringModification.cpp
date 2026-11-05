#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cout << " Enter a word: ";
    getline(cin, word);
    cout << " Original word: " << word << endl;

    word[0] = 'A';
    word[word.size() - 1] = 'Z';
    cout << " Modified word: " << word;

    return 0;
}
