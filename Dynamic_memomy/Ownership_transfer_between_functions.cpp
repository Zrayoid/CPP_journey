#include<iostream>
using namespace std;



int* createArray(int Size){
    int* arr = new int[Size];
    cout << " Enter the elements of the Array: "<< endl;

    for ( int i = 0; i < Size; i++)
    {
        cout << " Element "<< i <<": ";
        cin >> *(arr + i);
    }

    return arr;

}

int processArray( int* ptr, int Size)
{
    int sum = 0;
    for ( int i = 0; i < Size; i++)
    {
        *(ptr + i) *= 2;
        sum += *(ptr + i);
    }
    return sum;
    
}

int main()
{
    int Size;
    cout << " Enter the size of Array: ";
    cin >> Size;
    if ( Size <= 0 )
    {
        cout << " Invalid size.";
        return 0;
    }
    int* adArray = createArray( Size);
    if ( adArray == nullptr)
    {
        cout << " Invalid Address.";
        return 0;
    }

    int result = processArray(adArray, Size);

    for ( int i = 0; i < Size; i++)
    {
        cout << *(adArray + i) << " ";
    }
    
    cout << "\nSum is: "<< result;

    delete[] adArray;
    adArray = nullptr;
    return 0;
}