#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int marks;
    public:
        Student( string Name, int Marks )
            : name(Name), marks(Marks) 
            {
                cout << " Normal Constructor Executed.\n";
            }

        Student (const Student& other)
        {
            name = other.name;
            marks = other.marks;

            cout << " Copy Constructor Executed.\n";

        }

        Student& operator= (const Student& other)
        {
            name = other.name;
            marks = other.marks;
            cout << " Copy Assingment Operator Executed.\n";

            return *this;
        }

        void display()
        {
            cout << " Name: "<< name << endl;
            cout << " Marks: "<< marks << endl;
        }
        
};

int main()
{
    Student s1("Alex", 85);
    s1.display();
    cout << endl;

    Student s2 = s1;
    s2.display();
    cout << endl;

    Student s3("John", 60);
    s3.display();
    cout << endl;

    s3 = s1;
    s3.display();


    return 0;
}