#include <iostream>
using namespace std;

void replaceValue(int** ptr, int num)
{
   delete *ptr;
   *ptr = nullptr;
   *ptr = new int{num};
}

int main()
{
    int num;
    int *ptr = new int{100};
    cout << *ptr << endl;
    cout << " Enter the new value: ";
    cin >> num;
    replaceValue(&ptr, num);

    cout << *ptr;
    delete ptr;
    ptr = nullptr;

    return 0;
}