#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << " Enter the size of array: ";
    cin >> size;
    int* ptr = new int[size];
    cout << " Enter the "<< size << " elements " << endl;

    for ( int i = 0; i < size; i++)
    {   
        cout << " Enter the element at "<< i << " :";
        cin >> ptr[i];
    }

    for ( int i = 0; i < size; i++)
    {   
        cout << *(ptr + i) << " ";
    }

    delete [] ptr;
    return 0;
}
