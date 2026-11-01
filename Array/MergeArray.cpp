#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int arr2[10];
    int arr3[20];

    int size, totalSize = 0, size1;

    for (int i = 1; i < 3; i++)
    {
        cout << " Enter the size of array " << i << ":";
        cin >> size;
        if (size > 10 || size <= 0)
        {
            cout << " Invalid size......";
            return 0;
        }
        if (i == 1)
        {
            cout << " Enter the values.\n";
            for (int i = 0; i < size; i++)
            {
                cout << " Index " << i << " :";
                cin >> arr[i];
            }
            size1 = size;
            cout << " Array " << i << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << " Enter the values.\n";
            for (int i = 0; i < size; i++)
            {
                cout << " Index " << i << " :";
                cin >> arr2[i];
            }
            cout << " Array " << i << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr2[i] << " ";
            }
        }

        cout << endl;
        totalSize += size;
    }
    cout << endl;
    if (totalSize > 20 || totalSize <= 0)
    {
        cout << " Capacity Exceedes, cannot merge......";
        return 0;
    }
    int counterSize = 0;
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr[i];
        counterSize++;
    }

    for (int i = 0; i < size; i++)
    {
        arr3[counterSize] = arr2[i];
        counterSize++;
    }

    cout << " Merged Array\n";
    for (int i = 0; i < totalSize; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << " \nSize of merged array is: " << totalSize;

    return 0;
}
