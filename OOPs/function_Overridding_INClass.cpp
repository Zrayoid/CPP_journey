#include <iostream>
#include <string>
using namespace std;

class Employee
{
    protected:
        string name;
        float salary;
    public:
        Employee(string n, float s) 
            : name(n), salary(s) {}

        virtual void displaySalary()
        {
            cout << " Salary: "<< salary << endl;
        }

};

class Manager : public Employee
{
    public:
        Manager(string name, float salary)
            : Employee(name, salary) {}
        
        void displaySalary() override
        {
            int managerBonus = 10000;
            cout << " Name: " << name << endl;
            cout << " Salary: " << salary + managerBonus;
        }

};

int main()
{
    Employee e("John", 40000);
    Manager m1("Alex", 40000);
    Employee* emp = &e;
    emp = &m1;
    emp->displaySalary();


    return 0;
}