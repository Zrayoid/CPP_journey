#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int length, width;
   cout<<"Enter the length of the rectangle.\n";
   cin>>length;
   cout<<"Enter the width of the rectangle.\n";
   cin>>width;
   cout<<"Area of a rectangle = "<< length * width<<endl;
   cout<<"Perimeter of a rectangle = "<< length * width<<endl;
   cout<<"Diagonal of a rectangle = "<< sqrt((length * length)+(width*width)) <<endl;
   
    return 0;
}
