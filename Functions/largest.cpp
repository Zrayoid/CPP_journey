#include <iostream>
using namespace std;

int largest(int a, int b)
{
    if (a > b)
    {
        return a;
    }
   
    return b;
}

int main()
{
    cout << largest(8, 9);
    return 0;
}



