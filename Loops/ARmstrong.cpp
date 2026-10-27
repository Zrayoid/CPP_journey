#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int temp, wTemp;
    int rem;
    int count = 0;
    int power = 1;
    for (int i = 1; i <= 1000; i++)
    {
        sum = 0;
        temp = i;
        wTemp = i;
        count = 0;

        while (wTemp > 0)
        {
            int vax = wTemp % 10;
            wTemp /= 10;
            count++;
        }

        for (int j = i; j > 0;)
        {
            rem = j % 10;
            power = 1;
            for (int k = 1; k <= count; k++)
            {
                power *= rem;
            }

            sum = sum + power;
            j /= 10;
        }

        if (sum == temp)
        {
            cout << "This a ARMSTRONG Number----> " << temp << endl;
        }
    }

    return 0;
}
