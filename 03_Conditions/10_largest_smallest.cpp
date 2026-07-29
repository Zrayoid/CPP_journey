#include <iostream>
using namespace std;

int main() {
    int Numf, Nums, Numth;
    cout << "Enter three numbers: ";
    cin >> Numf >> Nums >> Numth;

    // Case 1: First number is greater than or equal to Second number
    if (Numf >= Nums) {
        if (Nums >= Numth) { // Order: Numf >= Nums >= Numth
            cout << "largest is " << Numf << endl;
            cout << "smallest is " << Numth << endl;
        } 
        else if (Numth >= Numf) { // Order: Numth >= Numf >= Nums
            cout << "largest is " << Numth << endl;
            cout << "smallest is " << Nums << endl;
        } 
        else { // Order: Numf >= Numth >= Nums (Numth is in the middle!)
            cout << "largest is " << Numf << endl;
            cout << "smallest is " << Nums << endl;
        }
    }
    // Case 2: Second number is strictly greater than First number
    else {
        if (Numf >= Numth) { // Order: Nums > Numf >= Numth
            cout << "largest is " << Nums << endl;
            cout << "smallest is " << Numth << endl;
        } 
        else if (Numth >= Nums) { // Order: Numth >= Nums > Numf
            cout << "largest is " << Numth << endl;
            cout << "smallest is " << Numf << endl;
        } 
        else { // Order: Nums >= Numth >= Numf (Numth is in the middle!)
            cout << "largest is " << Nums << endl;
            cout << "smallest is " << Numf << endl;
        }
    }

    return 0;
}
