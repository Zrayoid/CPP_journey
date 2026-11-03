#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int;
    *ptr = 75;
    cout << " The value in the address of ptr is: "<< *ptr << endl;
    *ptr = 150;
    cout << " The value in the address of ptr is: "<< *ptr << endl;

    delete ptr;
    return 0;
}
