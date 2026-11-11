#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Date
{
    string Day;
    int date;
    string Month;
    int Year;
};

struct Employee
{
    string Name;
    int Id;
    Date JoiningDate;
};

int main()
{
    Employee E;
    cout <<" Enter Name: ";
    getline(cin, E.Name);
    cout << " Enter Id: ";
    cin >> E.Id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << " Enter the Day of joining: ";
    getline(cin, E.JoiningDate.Day);
    cout << " Enter the Date of Joining: ";
    cin >> E.JoiningDate.date;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << " Enter the Month of joining: ";
    getline(cin, E.JoiningDate.Month);
    cout << " Enter the Year of joining: ";
    cin >> E.JoiningDate.Year;

    cout << " Employee Name: "<< E.Name << endl;
    cout << " Employee Id: "<< E.Id << endl;
    cout << " Employee Joining Day: "<< E.JoiningDate.Day << endl;
    cout << " Employee Joining Date: "<< E.JoiningDate.date<< endl;

    cout << " Employee Month: "<< E.JoiningDate.Month<< endl;
    cout << " Employee Year: "<< E.JoiningDate.Year << endl;

    return 0;
}
