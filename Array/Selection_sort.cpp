#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int size, min_value, index;
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

    for (int j = 0; j < size - 1; j++)
    {
        min_value = arr[j];
        index = j;
        for (int k = j + 1; k < size ; k++)
        {
            if (min_value > arr[k])
            {
                index = k;
                min_value = arr[k];
            }
        }
        int temp = arr[j];
        arr[j] = min_value;
        arr[index] = temp;

    }

    cout << " Ascending Order\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
