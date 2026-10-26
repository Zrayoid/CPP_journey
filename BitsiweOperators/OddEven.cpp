#include<iostream>
using namespace std;

int main(){
    int num1;

    cout << " Enter a number:: ";
    cin >> num1;

   if ( (num1 & 1) == 0 )
   {
        cout << "The Number is Even. ";
   }
   else
   {
        cout << "The Number is Odd. ";
   }

    return 0;
}
