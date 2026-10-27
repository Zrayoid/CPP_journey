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
    int max2 = 0;
    for (int i = digit; i > 0; i /= 10)
    {
        temp = i % 10;
        if (temp > max2 && temp < max)
        {
            max2 = temp;
        }
    }

    cout << max2;
    return 0;
}
