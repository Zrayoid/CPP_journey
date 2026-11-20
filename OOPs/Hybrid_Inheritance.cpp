 #include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a)
    {
        cout << " Person constructor " << endl;
        cout << endl;
    }

    void displayPerson()
    {
        cout << " Name: " << name << endl;
        cout << " Age: " << age << endl;
    }
};

class Student : virtual public Person
{
private:
    int rollNumber;

public:
    Student(string name, int age, int rollNum)
        : Person(name, age), rollNumber(rollNum)
    {
        cout << " Student constructor " << endl;
        cout << endl;
    }

    void displayStudent()
    {
        cout << " Roll Number: " << rollNumber << endl;
    }
};

class Employee : virtual public Person
{
private:
    int employeeID;

public:
    Employee(string name, int age, int empid)
        : Person(name, age), employeeID(empid)
    {
        cout << " Employee constructor " << endl;
        cout << endl;
    }

    void displayEmployee()
    {
        cout << " Employee Id: " << employeeID << endl;
    }
};

class TeachingStaff : public Student, public Employee
{
private:
    string subject;

public:
    TeachingStaff(string name, int age, int rollNum, int empid, string subj)
        : Person(name, age),
          Student(name, age, rollNum),
          Employee(name, age, empid),
          subject(subj)
    {
        cout << " Teaching Staff constructor " << endl;
        cout << endl;
    }

    void displayTA()
    {
        cout << " Subject: " << subject << endl;
    }
};


class ResearchStudent: public Student
{
    private:
        string researchTopic;
    public:
        ResearchStudent (string name, int age, int rollNum, string Rt)
            :   Person(name, age),
                Student( name, age, rollNum),
                researchTopic(Rt) {}

        void displayRS()
        {
            cout << " ResearchTopic: "<< researchTopic << endl;
        }
};


int main()
{
    TeachingStaff ta( "Alex", 22, 501, 101, "Computer Science");
    ResearchStudent rs( "Sarah", 24, 601, "Artificial Intelligence" );

    ta.displayPerson();
    ta.displayStudent();
    ta.displayEmployee();
    ta.displayTA();

    cout << endl;
    cout << endl;

    rs.displayPerson();
    rs.displayStudent();
    rs.displayRS();
    return 0;
}