#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int size;
    cout << " Enter the size of array:";
    cin >> size;
    if (size > 10 || size < 0)
    {
        cout << " Invalid size......";
        return 0;
    }
    cout << " Enter the values.\n";
    for (int i = 0; i < size; i++)
    {
        cout << " Index " << i << " :";
        cin >> arr[i];
    }

    for (int j = 0; j < size; j++)
    {
        for (int i = j+1; i < size; i++)
        {
            if (arr[j] == arr[i])
            {
                for (int k = i; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                i--;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << " \nSize is: "<< size;
    return 0;
}
