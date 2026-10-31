#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    cout << " Enter the elements of 2D Array\n";
    int target;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " Enter element  [" << i << "][" << j << "] :";
            cin >> a[i][j];
        }
    }

    cout << " Enter the Target: ";
    cin >> target;
    bool found = false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (target == a[i][j])
            {
                cout << " \nTarget Found at Index [" << i << "] [" << j << "]" << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << " Element not found.";
    }
    return 0;
}
