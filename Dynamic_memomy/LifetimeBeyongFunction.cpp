#include <iostream>
using namespace std;

int* createValue()
{
   int* ptr = new int{100};
   cout << ptr << endl;
   return ptr;
}

int main()
{
   int* num = createValue();
   cout << *num << endl;

   *num = 250;
   cout << *num << endl;

   delete num;
   num = nullptr;

    return 0;
}