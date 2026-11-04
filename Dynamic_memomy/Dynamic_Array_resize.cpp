#include<iostream>
using namespace std;

int* Resize(int* ptr, int* oldSize)
{  
    int newsize ;
    cout << " Enter the Newsize ";
    cin >> newsize;
    if ( newsize <= *oldSize )
    {
        cout << " Enter greater size than Oldsize";
        return 0;
    }
    int* arr2 = new int[newsize];

    for ( int i = 0 ; i < newsize; i++)
    {
        if ( i < *oldSize)
        {
            *( arr2 + i ) = *( ptr + i );
        }
        else
        {
            cout << " Element "<< i << ": ";
            cin >> *(arr2 + i);
            if (cin.fail() )
            {
                delete[] arr2;
                return nullptr;
            }
        }
        
    }

    *oldSize = newsize;

    delete[] ptr;
    ptr = nullptr;

    return arr2;
}

int main(){

    int size;
    cout << " Enter the size of Array: ";
    cin >> size;

    if ( size <= 0)
    {
        cout << " Invalid size.";
        return 0;
    }

    int* arr = new int[size];
    cout << " Enter the elements: \n";

    for ( int i = 0; i < size; i++)
    {
        cout << " Element "<< i << ": ";
        cin >> *(arr + i);
    }

    int*  newarr = Resize(arr, &size);
    if ( newarr == nullptr )
    {
        cout << " Resizing failed. ";
        delete[] arr;
        return 0;
    }

    for ( int j = 0; j < size; j++)
    {
        cout << *(newarr + j) << " ";
    }


    delete[] newarr;
    newarr = nullptr;
    return 0;
}