#include<iostream>
using namespace std;

int main(){
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;

   if( temp > 30 ){
    cout << "It is very hot. ";
   }
   else if ( (temp < 30) && (temp > 15) ){
    cout << "It is normal. ";
   }
   else if ( (temp < 15) && ( temp > 0)){
    cout << "It is cold today.";
   }
   else
    cout << "It is freezing today. ";
    return 0;
}
