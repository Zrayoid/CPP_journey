#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int size, value, index;
    cout << " Enter the number of elements(0 - 10): ";
    cin >> size;

    if (size < 0 || size > 10)
    {
        cout << " Invalid..";
        return 0;
    }

    cout << " Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array.\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    if (size == 10)
    {
        cout << " Array is Full. \nCannot Insert....";
        return 0;
    }

    cout << "\nAt which place you want to add the new value: ";
    cin >> index;

    if ( index > size || index < 0)
    {
        cout << "\nInvalid index.";
        return 0;
    }

    cout << " Enter the value: ";
    cin >> value;

    for (int i = (size-1); i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    size++;

    cout << "New Array.\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
