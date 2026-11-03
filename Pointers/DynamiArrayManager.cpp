#include <iostream>
using namespace std;

int findMax(int *arr, int size)
{
    int max = *arr;

    for (int i = 1; i < size; i++)
    {
        if (max < *(arr + i))
        {
            max = *(arr + i);
        }
    }
    return max;
}

void reverseArray(int *arr, int size)
{
    for (int i = 0; i < (size / 2); i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + (size - (1 + i)));
        *(arr + (size - (1 + i))) = temp;
    }
}

int main()
{
    int size;
    cout << " Enter the size of an Array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << " Invalid size.";
        return 0;
    }

    int *arr = new int[size];

    for (int j = 0; j < size; j++)
    {
        cout << " Element " << j << ": ";
        cin >> *(arr + j);
    }

    cout << " Max is: " << findMax(arr, size);
    reverseArray(arr, size);

    cout << endl;
    cout << " Reversed Array: ";
    for (int k = 0; k < size; k++)
    {
        cout << *(arr + k) << " ";
    }

    delete[] arr;
    return 0;
}
