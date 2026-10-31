#include <iostream>
using namespace std;

int main()
{
    int a[2][2][2];
    int max, min;
    int count = 0, target;

    cout << " Enter the elements of the 3D Array.\n";
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 2; k++)
            {
                cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]: ";
                cin >> a[i][j][k];
            }

            cout << endl;
        }

        cout << endl;
    }

    cout << " Enter the Target: ";
    cin >> target;

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 2; k++)
            {
                if (target == a[i][j][k])
                {
                    cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]: "<< endl;
                    count ++;
                }
            }

            cout << endl;
        }

        cout << endl;
    }

    cout << " Count is: "<< count;

    return 0;
}
