#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        int employeeID;
    protected:
        float salary;
    public:
        Employee ( int id, float salary) : employeeID(id), salary(salary) {}

        void displayEmployee()
        {
            cout << " EmployeeID: "<< employeeID << endl;
            cout << " Salary: "<< salary << endl;
        }

      
};

class Manager : public Employee 
{
    private:
        string department;

    public:
        Manager(int id, float salary, string dep) 
            : Employee(id, salary), department(dep) {}
        
        void displayManager()
        {
            displayEmployee();
            cout << " Manager: "<< department << endl;
        }

    
};

class Developer : protected Employee
{
    private:
        string programmingLanguage;
    public:
        Developer(int id, float salary, string progL) : Employee(id, salary), programmingLanguage(progL) {}

        void displayDeveloper()
        {
            displayEmployee();
            cout << " Programming Language: "<< programmingLanguage << endl;
        }

       
};

class Intern: private Employee
{
    private:
        int duration;
    public:
        Intern(int id, float salary, int dur) : Employee(id, salary), duration(dur) {}

        void displayIntern()
        {
            displayEmployee();
            cout << " Duration: " << duration << " Month." << endl;
        }

};

int main()
{
    Intern i(101, 7000, 3);
    Developer d(501, 40000,"C++" );
    Manager m(201, 70000, "PR");

    cout << " Intern Info" << endl;
    i.displayIntern();
    cout << endl;
    cout << endl;
    cout << " Developer Info" << endl;
    d.displayDeveloper();
    cout << endl;
    cout << endl;
    cout << " Manager Info" << endl;
    m.displayManager();
   
    return 0;
}