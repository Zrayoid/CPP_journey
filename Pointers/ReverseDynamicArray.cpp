#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << " Enter the size of array :";
    cin >> size;

    if ( size <= 0 )
    {
        cout << " Invalid size. ";
        return 0;
    }

    int* arr = new int[size];

    for ( int i = 0; i < size; i++)
    {
        cout << " Element "<< i << ": ";
        cin >> *(arr + i);
    }

    cout << " Original array.";
    for ( int i = 0; i < size; i++)
    {
        cout << *(arr + i)<< " ";
    }

    cout << endl;
   
    for ( int j = 0; j < (size/2); j++ )
    {
        int temp = *( arr + j );
        *( arr + j ) = *( arr + (size - (1 + j))) ;
        *( arr + (size - (1 + j)) ) = temp;
        
    }

    cout << " Reversed array.";
    for ( int i = 0; i < size; i++)
    {
        cout << *(arr + i)<< " ";
    }

    delete[] arr;
    return 0;
}
