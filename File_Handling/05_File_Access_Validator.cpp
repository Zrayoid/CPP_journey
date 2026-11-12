
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename, line;

    cout << "Enter filename to open: ";
    getline(cin, filename);

    ifstream file;
    file.open(filename);

    if (file.is_open())
    {
        cout << "\nFile opened successfully!\n";
        cout << "\n===== FILE CONTENTS =====\n";

        while (getline(file, line))
        {
            cout << line << endl;
        }

        cout << "\nEnd of file reached!\n";

        file.close();
    }
    else
    {
        cout << "Unable to open file.\n";
    }

    return 0;
}
