#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence;
    cout << " Enter a sentence: ";
    getline(cin,sentence);
    int start_post, length;
    cout << " Enter the starting position: ";
    cin >> start_post;
    cout << " Enter the length: "; 
    cin >> length;

    if ( start_post < 0 || start_post > sentence.length() || length < 0 )
    {
        cout << " Out of range.. ";
        return 0;
    }
    cout << sentence.substr(start_post, length);
    return 0;
}