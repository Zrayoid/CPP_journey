#include <iostream>
using namespace std;


int DigitCount(int num, int target)
{
    int count = 0;
    if( num == 0 && target == 0){
        return 1;
    }
    while (num != 0)
    {
        int temp = num % 10;
        if( temp == target){
            count++;
        }
        num /= 10;
    }
    return count;
}

int main()
{
    int num, target;
    cout << " Enter a number: ";
    cin >> num;
    cout << " Enter the number you want to count: ";
    cin >> target;

    int result = DigitCount(num, target);
    cout << " The Target has appeared: "<< result << " Times.";

    return 0;
}
