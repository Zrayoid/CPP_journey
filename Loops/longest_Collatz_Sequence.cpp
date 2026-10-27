#include <iostream>
using namespace std;

int main()
{
    int count1, count2 = 1;
    int BestSequence = 1;
    for (int i = 1; i <= 100; i++)
    {
        count1 = 1;
        for (int j = i; j > 1;)
        {

            if (j % 2 == 0)
            {
                j /= 2;
            }
            else
            {
                j = j * 3 + 1;
            }
            count1++;
        }

        if (count1 > count2)
        {
            count2 = count1;
            BestSequence = i;
        }
    }

    cout << BestSequence << endl;
         
    for (int j = BestSequence; j > 1;)
    {

        if (j % 2 == 0)
        {
            j /= 2;

            cout << j << "\n";
        }
        else
        {
            j = j * 3 + 1;
            cout << j << "\n";
        }
    }

    cout << endl << endl;
    cout << " Count is---> " << count2;
    return 0;
}
