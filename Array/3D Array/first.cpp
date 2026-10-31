#include <iostream>
using namespace std;

int main()
{
    int a[2][2][2];
    cout << " Enter the elements of 3D Array\n";
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << " Enter element  [" << i << "][" << j << "][" << k << "]: ";
                cin >> a[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }


    return 0;
}
