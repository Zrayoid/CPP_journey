#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int num1, int num2)
    {
        return num1 + num2;
    }

    int add(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }

    double add(double num1, double num2)
    {
        return num1 + num2;
    }

    double add(int num1, double num2)
    {
        return num1 + num2;
    }
};

int main()
{
    Calculator c;
    
    cout << "2 Integer Add: "<< c.add(2, 5) << endl;
    cout << "3 Integer Add: "<< c.add(2, 5, 6) << endl;
    cout << "2 Double Add: "<< c.add(2.05, 5.2) << endl;
    cout << "1 Integer and 1 Double Add: "<< c.add(2, 5.2) << endl;


    return 0;
}