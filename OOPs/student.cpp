#include <iostream>
#include <string>
using namespace std;

class student{

    public:
        string name;
        int rollNo;
        float marks;

        void displayDetails()
        {
            cout << " Name: "<< name << endl;
            cout << " Marks: "<< marks << endl;
            cout << " RollNo: "<< rollNo << endl;
        }

        void updateMarks()
        {
            marks += 10;
        }
};

int main()
{
    student s1;
    student s2;

    s1.name = "Alex";
    s2.name = "Allen";

    s1.rollNo = 16;
    s2.rollNo = 20;

    s1.marks = 45;
    s2.marks = 80;

    s1.displayDetails();
    s2.displayDetails();

    s1.updateMarks();

    
    s1.displayDetails();
    s2.displayDetails();

    return 0;
}