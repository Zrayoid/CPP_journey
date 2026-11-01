#include <iostream>
using namespace std;

int main()
{
    int arr1[10];
    int arr2[10];
    int arr3[20];

    int size, totalSize = 0, size1, index;

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
                cin >> arr1[i];
            }
            size1 = size;
            cout << " Array " << i << endl;
            for (int i = 0; i < size; i++)
            {
                cout << arr1[i] << " ";
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
    
    int i = 0;
    int j = 0;
    int k = 0;

    while ( i <size1 && j < size )
    {
        if ( arr1[i] < arr2[j] )
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    // copy remaining elements from arr1
    while ( i < size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

     // copy remaining elements from arr2
    while ( j < size)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }


    cout << " Merged Array\n";
    for (int i = 0; i < totalSize; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << " \nSize of merged array is: " << totalSize;

    return 0;
}
