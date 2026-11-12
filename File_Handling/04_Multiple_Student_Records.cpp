#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name, course;
    int age;
    int count;
    ofstream file;
    file.open("Student.txt");

    if (file.is_open())
    {
        cout << " Enter the number of students: ";
        cin >> count;

        cin.ignore(1000, '\n');

        for (int i = 0; i < count; i++)
        {
            cout << " Enter Name of the student: ";
            getline(cin, name);
            file << name << endl;
            cout << " Enter the age: ";
            cin >> age;
            file << age << endl;
            cin.ignore(1000, '\n');
            cout << " Enter the course Name: ";
            getline(cin, course);
            file << course << endl;
        }
        file.close();
    }
    else
    {
        cout << " File does not exist!\n";
    }

    ifstream readfile;
    readfile.open("Student.txt");
    if (readfile.is_open())
    {
        cout << "============== STUDENT RECORDS =============\n";
        while (getline(readfile, name))
        {
            readfile >> age;
            readfile.ignore(1000, '\n');
            getline(readfile, course);

            cout << " Name: " << name << " | Age: " << age << " | course: " << course << endl;
        }
        readfile.close();
    }
    else
    {
        cout << " File does not exist!\n";
    }
    return 0;
}
