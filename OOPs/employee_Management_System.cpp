#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person(string name, int Age) 
            : name(name), age(Age){}
        
        void displayPerson()
        {
            cout << " Name: "<< name << endl;
            cout << " Age: "<< age << endl;
        }
};

class Employee : public Person
{
    private:
        int employeeID;
        float salary;

    public:
        Employee(string name, int age, int id, float sal): Person(name , age)
        {
            employeeID = id;
            salary = sal;
        }

        void displayEmployee()
        {
            cout << " Employee_ID: "<< employeeID << endl;
            cout << " Employee Salary: "<< salary << endl;
        }

};

class Manager: public Employee
{
    private:
        string department;

    public:
        Manager(string name, int age, int id, float salary, string depart) 
            : Employee(name, age, id, salary),department(depart) {} 

        void displayManager()
        {
            cout << " Department: " << department << endl;
        }
};

class Developer : public Employee
{
    private:
        string programmingLanguage;

    public:
        Developer(string name, int age, int id, float salary, string progL) 
            : Employee(name, age, id, salary), programmingLanguage(progL) {} 

    void displayDeveloper()
    {
        cout << " Programming Language: "<< programmingLanguage << endl;
    }

};

int main()
{
    
    Manager m1("Alex", 35, 101, 80000, "HR");
    Developer d1("Ryan", 24, 102, 50000, "c++");

    m1.displayPerson();
    m1.displayEmployee();
    m1.displayManager();

    d1.displayPerson();
    d1.displayEmployee();
    d1.displayDeveloper();
    
    return 0;
}