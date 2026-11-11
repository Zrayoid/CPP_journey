#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Employee
{
    string Name;
    int Id;
    float salary;
};

int main()
{
    Employee *ptr = new Employee;

    cout << " Enter Name: ";
    getline(cin, ptr->Name);
    cout << " Enter Id: ";
    cin >> ptr->Id;
    cout << " Enter salary: ";
    cin >> ptr->salary; 
    
    cout << ptr->Name << endl;
    cout << ptr->Id << endl;

    ptr->salary = ptr->salary + ((ptr->salary)*10/100);
    cout << ptr->salary << endl;

    delete ptr;
    ptr = nullptr;
    
    return 0;
} 
