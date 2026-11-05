#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string word;
    cout << " Enter a string: ";
    getline(cin,word);
    cout << endl;
    cout << " Original string: "<< word << endl;

    reverse(word.begin(), word.end());
    cout << " Reversed string: "<< word;

    return 0;
}
