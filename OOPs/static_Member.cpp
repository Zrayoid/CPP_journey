#include <iostream>
using namespace std;

class Employee
{
    private:
        string Name;
        int employeeID;
        static int totalEmployees;

    public:
        Employee(string name, int id)
            : Name(name), employeeID(id)
            {
                totalEmployees++;
            } 
            
        void display()
        {
            cout << " Employee Name: "<< Name << endl;
            cout << " EmployeeId: " << employeeID << endl;
        }

        static void showTotalEmployees()
        {
            cout << " Total employees: " << totalEmployees << endl;
        }

};

int Employee::totalEmployees = 0;

int main()
{
    Employee:: showTotalEmployees();
    Employee e1("Alex", 101);
    Employee e2("Alen", 102);
    Employee e3("Charlie", 103);

    e1.display();
    e2.display();
    e3.display();
    Employee:: showTotalEmployees();

    
    return 0;
}