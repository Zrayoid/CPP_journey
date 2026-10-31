#include <iostream>
using namespace std;

int main()
{
    int a[2][2][2];
    int max, min;
    int maxLayer, maxRow, maxCol, minLayer, minRow, minCol;
    cout << " Enter the elements of the 3D Array.\n";
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 2; k++)
            {
                cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]: ";
                cin >> a[i][j][k];

                if (i == 0 && j == 0 && k == 0)
                {
                    max = min = a[0][0][0];
                    maxLayer = minLayer = i;
                    maxRow = minRow = j;
                    maxCol = minCol = k;
                }
                else
                {
                    if (max < a[i][j][k])
                    {
                        max = a[i][j][k];
                        maxLayer = i;
                        maxRow = j;
                        maxCol = k;
                    }
                    if (min > a[i][j][k])
                    {
                        min = a[i][j][k];
                        minLayer = i;
                        minRow = j;
                        minCol = k;
                    }
                }
            }
            cout << endl;
        }

        cout << endl;
    }

    cout << "Max is at: " << "[" << maxLayer << "]" << "[" << maxRow << "]" << "[" << maxCol << "]: " << max;
    cout << "\nMin is at: " << "[" << minLayer << "]" << "[" << minRow << "]" << "[" << minCol << "]: " << min;

    return 0;
}
