#include <iostream>
using namespace std;

int main()
{
    int firstNum;
    int secondNum;
    int thirdNum;
    cout << "Enter 3 Numbers\n";
    cout << "Enter first Number:: ";
    cin >> firstNum;
    cout << "Enter Second Number:: ";
    cin >> secondNum;
    cout << "Enter third Number:: ";
    cin >> thirdNum;

    if (firstNum > secondNum)
    {

        if (firstNum < thirdNum)
        {
            cout << "Third Number is the largest.";
        }
        else
            cout << "First Number is the largest.";
    }
    else if (firstNum < secondNum)
    {

        if (secondNum < thirdNum)
        {
            cout << "Third Number is the largest.";
        }
        else
            cout << "Second Number is the largest.";
    }
    else if (firstNum == secondNum)
    {

        if (firstNum == thirdNum)
        {
            cout << "All the numbers are equal.";
        }
        else if ( firstNum < thirdNum ){
            cout << "Third Number is the largest.";
        }
        else
            cout << "Third Number is smaller than first and second number.";
    }
    return 0;
}