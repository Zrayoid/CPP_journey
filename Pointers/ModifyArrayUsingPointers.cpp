#include <iostream>
using namespace std;

void UpdateArray( int* ptr, int size  )
{
    for ( int i = 0; i < size; i++ )
    {
        *(ptr + i) *= 2; 
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    UpdateArray(arr, sizeof(arr)/sizeof(arr[0]));
   
    
    for ( int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++ )
    {
        cout << arr[i] << " "; 
    }

    return 0;
}
