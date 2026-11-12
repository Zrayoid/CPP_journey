
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file;
    file.open("Student.txt");

    if (file.is_open())
    {
        string name, course;
        int age;

        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore(1000, '\n');

        cout << "Enter course: ";
        getline(cin, course);

        file << "Name: " << name << endl;
        file << "Age: " << age << endl;
        file << "Course: " << course << endl;

        file.close();

        cout << "Student information saved successfully!\n";
    }
    else
    {
        cout << "Unable to create file.\n";
    }

    return 0;
}
