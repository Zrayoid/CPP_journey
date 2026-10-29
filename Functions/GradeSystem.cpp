#include <iostream>
using namespace std;

bool isPassing(int marks)
{
    return marks >= 40 ;
}

char getGrade(int marks)
{

    if (marks >= 80)
    {
        return 'A';
    }
    else if (marks >= 60)
    {
        return 'B';
    }
    else if (marks >= 40)
    {
        return 'C';
    }

    return 'F';
}

int main()
{
    int marks;
    cout << " Enter your marks: ";
    cin >> marks;
    char result = getGrade(marks);
    if (isPassing(marks))
    {
        cout << "Passed," << result << " Grade.";
    }
    else
        cout << " Failed," << result << " Grade.";

    return 0;
}
