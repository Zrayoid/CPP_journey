#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int size;
    cout << " Enter the size of array:";
    cin >> size;
    if (size > 10 || size <= 0)
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

    cout << " Accesending Order\n";
    for (int j = 0; j < size-1; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << " Descending Order\n";
    for (int j = 0; j < size-1; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
