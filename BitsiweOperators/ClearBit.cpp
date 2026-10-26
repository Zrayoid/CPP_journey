#include<iostream>
using namespace std;

int main(){
    int num, post;

    cout << " Enter a number:: ";
    cin >> num;

    cout << " Enter the position:: ";
    cin >> post;

   cout << (num & ~( 1 << post ));

    return 0;
}
