#include<iostream>
using namespace std;

int* createValue()
{
    int* num = new int{100};
    return num;
}
void doubleValue(int* ptr);

void modifyValue(int* ptr)
{
    int* another = ptr;
    doubleValue( another );
}

void doubleValue( int* ptr )
{
    *ptr *= 2;
}

int main()
{
    int* num = createValue();
    modifyValue( num );

    cout << *num;

    delete num;
    num = nullptr;
    return 0;
}
