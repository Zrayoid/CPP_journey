#include <iostream>
using namespace std;

int main()
{
    int size, max, min, sum = 0;
    cout << " Enter the size of array: ";
    cin >> size;
    if ( size <= 0)
    {
        cout << " Invalid size.";
        return 0;
    }
    int *ptr = new int[size];
    cout << " Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " Element " << i << ": ";
        cin >> *(ptr + i);
    }
    min = max = *(ptr);

    for (int j = 1; j < size; j++)
    {
        if (max < *(ptr + j))
        {
            max = *(ptr + j);
        }
    }
    cout << " Max From array: " << max << endl;

    for (int j = 1; j < size; j++)
    {
        if (min > *(ptr + j))
        {
            min = *(ptr + j);
        }
    }
    cout << " Min From array: "<< min << endl;

    for (int j = 0; j < size; j++)
    {
        sum += *(ptr + j);
    }
    cout << " Sum of array: " << sum << endl;

    delete[] ptr;
    return 0;
}
