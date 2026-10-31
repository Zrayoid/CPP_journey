#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int index, size, value;

    cout << " Enter the size of Array: ";
    cin >> size;
    if ( size > 10 || size < 0 )
    {
        cout << " Invalid size.";
        return 0;
    }

    for ( int i = 0; i < size-1; i++ )
    {
        cout << " Enter the "<< i << " element: ";
        cin >> arr[i];
    }

    cout << " Array\n";
    for ( int i = 0; i < size-1; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " Enter the value to be deleted: ";
    cin >> value;

    for ( int i = size-1; i > 0; i--)
    {
        if ( value == arr[i] )
        {
            for ( int j = i; j < size; j++)
            {
                arr[j] = arr[j+1];
            }
        }
    }
    size--;

    cout << " New Array.\n";

    for ( int i = 0; i < size-1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
