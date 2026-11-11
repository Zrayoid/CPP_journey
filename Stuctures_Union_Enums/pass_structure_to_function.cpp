#include <iostream>
#include <string>
using namespace std;

struct student
{
    string Name;
    int RollNo;
    float Marks;
};

void updateMarks(student* ptr)
{
    ptr->Marks += 5;    
}

int main()
{
    student s;
    cout << " Enter the name: ";
    getline(cin, s.Name);
    cout << " Enter RollNo: ";
    cin >> s.RollNo;
    cout << " Enter Makrs: ";
    cin >> s.Marks;

    updateMarks(&s);

    cout << " Name: "<< s.Name << endl;
    cout << " Roll No: "<< s.RollNo << endl;
    cout << " Marks: "<< s.Marks << endl;
    return 0;
}
