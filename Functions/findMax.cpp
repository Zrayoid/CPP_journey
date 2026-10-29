#include <iostream>
using namespace std;

int findMaximum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    return num2;
}
int findMaximum(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
    }
    if ( num3 > num2 )
    {
        if ( num3 > num1)
        {
            return num3;
        }
    }
    return num2;
}
double findMaximum(double num1, double num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    return num2;
}


int main()
{
    int num1, num2, num3;
    double N1, N2;

    cout << " Enter 2 numbers: ";
    cin >> num1 >> num2;
    int result = findMaximum(num1, num2);
    cout << result << " Is the max.\n\n";

    cout << " Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    int max = findMaximum(num1, num2, num3);
    cout << max << " is the max.\n\n";

    cout << " Enter 2 decimal Values: ";
    cin >> N1 >> N2;
    double maxD = findMaximum(N1, N2);
    cout << maxD << " Is the max.";

    return 0;
}
