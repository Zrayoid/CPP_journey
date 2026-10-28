#include <iostream>
using namespace std;

int CountDigits(long long a)
{
    int count = 0;
    if ( a == 0 ){
        return a;
    }
    while( a !=  0){
        a = a/10;
        count++;
    }    
    return count;
}

int main()
{
    long long num;
    cout << " Enter a number: ";
    cin >> num;
    
    int result = CountDigits(num);
    cout << " It has " << result << " digits";
    
    return 0;
}



