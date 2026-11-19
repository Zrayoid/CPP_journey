#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int age;
        float marks;

    public:
        
        Student(string Name, int Age, float Marks) 
            :name(Name), age(Age), marks(Marks) {};

        void setAge(int age)
        {
            this->age = age;
        }

        void setMarks(float marks)
        {
            this->marks = marks;
        }

        void display()
        {
            cout << " Name: "<< name << endl;
            cout << " Age: " << age << endl;
            cout << " Marks: "<< marks << endl;
        }

        ~Student(){}
};

int main()
{
    Student s1("Alex", 0, 0);
    Student s2("Bob", 0, 0);

    s1.setAge(18);
    s2.setAge(20);

    s1.setMarks(79);
    s2.setMarks(85);

    s1.display();
    s2.display();

    return 0;
}