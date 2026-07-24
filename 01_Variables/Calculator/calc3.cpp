#include<iostream>
using namespace std;

int main(){
   int a, b;
   char sign;
   cout<<"----------MENU----------\n";
   cout<<"1. Addition(+)\n";
   cout<<"2. Subtraction(-)\n";
   cout<<"3. Multiplication(*)\n";
   cout<<"4.Division(/)\n";
   cout<<"5.Remainder(%)\n";
   cout<<"-------------------------\n";

   cout<<"Select the operation you wanna perform.\n";
   cin>>sign;
   cout<<"Enter the Number 1.\n";
   cin>>a;
   cout<<"Enter the Number 2.\n";
   cin>>b;

   switch (sign)
   {
   case '+':
    cout<< a + b;
    break;
   case '-':
    cout<< a - b;
    break;
   case '*':
    cout<< a * b;
    break;
   case '/':
    cout<< a / b;
    break;
   case '%':
    cout<< a % b;
    break; 
   default:
   cout<<"Invalid operation";
    break;
   }
   
   
    return 0;
}
