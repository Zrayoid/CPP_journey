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
    Employee em;

    Employee  *ptr = &em;
    cout << " Enter Name: ";
    getline(cin, ptr->Name);
    cout << " Enter Id: ";
    cin >> ptr->Id;
    cout << " Enter salary: ";
    cin >> ptr->salary; 
    
    // (*ptr).Name = "Rex";
    // (*ptr).Id = 50938;
    // (*ptr).salary = 27000;

    cout << ptr->Name << endl;
    cout << ptr->Id << endl;

    ptr->salary = ptr->salary + ((ptr->salary)*10/100);
    cout << ptr->salary << endl;

    return 0;
} 
