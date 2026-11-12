
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file;
    file.open("Notes.txt", ios::app);

    if (file.is_open())
    {
        string note;

        cout << "Enter a note: ";
        getline(cin, note);

        file << note << endl;

        file.close();

        cout << "Note added successfully!\n";
    }
    else
    {
        cout << "Unable to open file.\n";
    }

    ifstream readfile;
    readfile.open("Notes.txt");

    if (readfile.is_open())
    {
        string line;

        cout << "\n===== ALL NOTES =====\n";

        while (getline(readfile, line))
        {
            cout << line << endl;
        }

        readfile.close();
    }

    return 0;
}
