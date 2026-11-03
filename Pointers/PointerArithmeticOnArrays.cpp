#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
    {   
        *(ptr + j) *= 2;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
