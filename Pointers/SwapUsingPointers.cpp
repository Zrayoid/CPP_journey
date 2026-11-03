#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int *ptr = arr;

    int temp = *ptr;
    *ptr = *(ptr + 4);
    *(ptr + 4) = temp;

    for ( int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << *(ptr + i)<< " ";
    }
    return 0;
}
