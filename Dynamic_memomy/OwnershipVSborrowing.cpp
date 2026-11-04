#include<iostream>
using namespace std;

void inspectValue( int* ptr )
{
    cout << *ptr << endl;
}

void modifyValue( int* ptr )
{
    *ptr = 750;
}

int main()
{
    int* num = new int{500};
    inspectValue( num );
    modifyValue( num );

    cout << *num;

    delete num;
    num = nullptr;
    return 0;
}