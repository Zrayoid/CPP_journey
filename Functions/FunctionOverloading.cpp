#include <iostream>
using namespace std;

int calculateArea(int side)
{
    return side * side;
}
int calculateArea(int height, int width)
{
    return height * width;
}
double calculateArea(double radius)
{
    return 3.14 * radius * radius;
}
int main()
{
    int val, side, height, width;
    double radius;
    cout << " Square 1 .\n";
    cout << " Rectangle 2.\n";
    cout << " Circle 3.\n";
    cout << " Enter you choice: ";
    cin >> val;
    switch (val)
    {
    case 1:
        cout << " Enter length: ";
        cin >> side;
        cout << calculateArea(side);
        break;
    case 2:
        cout << " Enter height And width: ";
        cin >> height >> width;
        cout << calculateArea(height, width);
        break;
    case 3:
        cout << " Enter Radius: ";
        cin >> radius;
        cout << calculateArea(radius);
        break;
    default:
        cout << " Invalid selceltion.";
    }
    return 0;
}
