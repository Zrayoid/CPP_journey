#include<iostream>
using namespace std;

int main(){
    int num;

    cout << " Enter a number:: ";
    cin >> num;

   if ( (num > 0) && ( num & (num - 1)) == 0 )
   {
        cout << "The Number is Power of 2. ";
   }
   else
   {
        cout << "The Number is Not Power of 2. ";
   }

    return 0;
}
