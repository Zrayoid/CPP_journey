#include<iostream>
using namespace std;

int main(){
    int num, post;

    cout << " Enter a number:: ";
    cin >> num;

    cout << " Enter the position:: ";
    cin >> post;

   if (num & ( 1 << post ) != 0)
   {
        cout << " The Bit is Set. ";
   }
   else
   {
        cout << " The Bit is not Set.";
   }
    return 0;
}
