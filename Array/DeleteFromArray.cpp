#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int index, size;

    cout << " Enter the size of Array: ";
    cin >> size;
    if (size > 10 || size < 0)
    {
        cout << " Invalid size.";
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        cout << " Enter the " << i << " element: ";
        cin >> arr[i];
    }

    cout << " Array\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " Enter the index to be cleared: ";
    cin >> index;

    if (index < 0 || index >= size)
    {
        cout << " Invalid index..";
        return 0;
    }
   
    for (int j = index; j < size - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
       
    size--;
    cout << " New Array.\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " \nSize of array is:  " << size;

    return 0;
}
