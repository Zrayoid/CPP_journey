#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string word;
    int start, end;
    cout << " Enter a string: ";
    getline(cin,word);
    cout << endl;
    cout << " Original string: "<< word << endl;
    cout << " Enter the start position: ";
    cin >> start;
    cout << " Enter the end position: ";
    cin >> end;

    if ( start > word.length() || start < 0 || end < 0 || end > word.length() || start > end )
    {
        cout << " Invalid inputs.";
        return 0;
    }

    reverse(word.begin() + start, word.begin() + end);
    cout << " Reversed string: "<< word;

    return 0;
}
