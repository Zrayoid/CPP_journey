#include <iostream>
using namespace std;

bool pallindrome(int num1, int num2)
{
   return num1 == num2;
}

int reverseNumber(int a)
{
    int temp;
    int reverse = 0;

    while (a != 0)
    {
        temp = a % 10;
        reverse = reverse * 10 + temp;
        a /= 10;
    }
    return reverse;
}

int main()
{
    int num;
    cout << " Enter a number: ";
    cin >> num;

    int ReversedNumber = reverseNumber(num);
    bool result = pallindrome(num, ReversedNumber);

    if ( result == true)
    {
        cout << " It is Pallindrome " << num << " ";
        
    }
    else
        cout << " It is not a Pallindrome. " << num;
    return 0;
}

