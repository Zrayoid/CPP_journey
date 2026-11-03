#include<iostream>
using namespace std;

int main(){
    int age = 42;
    cout << " age is: "<< age << endl;
    cout << " Address of age is: "<< &age << endl;
    
    int* ptr = &age;
    cout << " value in ptr is: "<< ptr << endl;

    if ( ptr == &age )
    {
        cout << " Addresses are same. ";
    }
    else
    {
        cout << " It is different. ";
    }
    cout << endl;
    cout << ( ptr == &age );
    return 0;
}
