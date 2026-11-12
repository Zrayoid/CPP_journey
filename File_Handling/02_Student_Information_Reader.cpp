
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file;
    file.open("Student.txt");

    if (file.is_open())
    {
        string line;

        cout << "===== STUDENT INFORMATION =====\n\n";

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
    else
    {
        cout << "Unable to open file.\n";
    }

    return 0;
}
