#include <iostream>
using namespace std;

int main()
{
    int digit;

    cout << " Enter a digit: ";
    cin >> digit;
    int max = 0, temp;

    for (int i = digit; i > 0; i /= 10)
    {
        temp = i % 10;
        if (temp > max)
        {
            max = temp;
        }
    }
    int max2 = -1;
    for (int i = digit; i > 0; i /= 10)
    {
        temp = i % 10;
        if (temp > max2 && temp < max)
        {
            max2 = temp;
        }
    }

     if (max2 == -1)
    {
        cout << " No 2nd Largest exist.";
    }
    else
    {
        cout << max2;
    }
    return 0;
}
