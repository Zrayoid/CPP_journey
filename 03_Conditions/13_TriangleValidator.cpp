#include<iostream>
using namespace std;

int main()
{
    float side1, side2, side3;
    cout << "Enter the length of the sides of a triangle.: \n";
    cout << "Side 1 = ";
    cin >> side1;
    cout << "Side 2 = ";
    cin >> side2;
    cout << "Side 3 = ";
    cin >> side3;

    if ( ( (side1 + side2) > side3) && ( (side2 + side3)> side1) && ( (side1 + side3) > side2))
    {
        cout << "This a Valid triangle....";
    }
    else
    cout << "This is not a Valid Triangle...";

    return 0;

}
