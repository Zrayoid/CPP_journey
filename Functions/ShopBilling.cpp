#include<iostream>
using namespace std;

double calculateDiscount(double price)
{
    return (price * 10)/100;
}

double calculateFinalPrice(double price)
{
    if ( price >= 1000)
    {
        return price - calculateDiscount(price);
    }
   
    return price;
}

int main()
{
    int price;
    cout << " Shop above 1000 and get 10 percent Discount\n";
    cout << " Enter the price of the item: ";
    cin >> price;
    double FinalPrice = calculateFinalPrice(price);
    cout << " Price is: " << FinalPrice << endl;
    
    return 0;
}
