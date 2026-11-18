#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string Name;
        float Marks;

    public:
        Student (string n, float m)
        {
            Name = n;
            Marks = m;
        }

        void setMarks(float Marks)
        {
            if ( Marks >= 0 && Marks <= 100)
            {
                this->Marks = Marks;
            }
        }

        float getMarks()
        {
            return Marks;
        }

        void display()
        {
            cout << " Student Name: "<< Name << endl;
            cout << " Marks: " << Marks << endl;
        }

        // copy constructor
        Student ( const Student& other)
        {
            Name = other.Name;
            Marks = other.Marks;
        }

        ~Student()
        {
            cout << " Destroyed\n";
        }
};


int main()
{
    Student s1("Rex", 85);
    Student s2 = s1;

    s1.display();
    s2.display();

    s1.setMarks(90);
    s1.display();
    s2.display();
    s2.setMarks(100); 
    s2.display();


    return 0;
}