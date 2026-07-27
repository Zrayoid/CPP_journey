#include<iostream>
#include<iomanip> //Needed for setw, left, and right formatting
#include<limits> //Needed for numeric limits

using namespace std;

int main(){
    //1. Table Header Setup
    //We set fixed widths: Type Name (20 spaces), Size (12 spaces), Min/Max (25 spaces)
    cout<< left << setw(20) << "Data Type"
        << setw(18) << "Size (bytes)"
        << setw(25) << "Min Value"
        << setw(25) << "Max Value" <<endl;
    
    //Table Divider Line
    cout<< setfill ('_') <<setw(88) << "" << setfill(' ')<<endl;

    //2. Table Rows

    // Boolean
    cout << left << setw(20) << "bool"
         << setw(18) << sizeof(bool)
         << setw(25) << numeric_limits<bool>::min()
         << setw(25) << numeric_limits<bool>::max()<<endl;

    //Characters
    cout << left << setw(20) << "char" 
         << setw(18) << sizeof(char)
         << setw(25) << static_cast<int>(numeric_limits<char>::min())
         << setw(25) << static_cast<int>(numeric_limits<char>::max()) <<endl;

    //short integer
    cout << left << setw(20) << "short"
         << setw(18) <<sizeof(short)
         << setw(25) << numeric_limits<short>::min()
         << setw(25) << numeric_limits<short>::max()<<endl;


    //long integer
    cout << left << setw(20) << "long"
         << setw(18) << sizeof(long)
         << setw(25) << numeric_limits<long>::min()
         << setw(25) << numeric_limits<long>::max()<<endl;

    //long long integer
    cout << left << setw(20)<< "long long"
         << setw(18) << sizeof(long long)
         << setw(25) << numeric_limits<long long>::min()
         << setw(25) << numeric_limits<long long>::max() <<endl;

     //integer<
     cout << left << setw(20) << "int"
          << setw(18) << sizeof(int)
          << setw(25) << numeric_limits<int>::min()
          << setw(25) << numeric_limits<int>::max()<<endl;

     //float
     cout << left << setw(20) << "float"
          << setw(18) << sizeof(float)
          << setw(25) << numeric_limits<float>::min()
          << setw(25) << numeric_limits<float>::max()<<endl;

     //double
     cout << left << setw(20) << "double"
          << setw(18) << sizeof(double)
          << setw(25) << numeric_limits<float>::min()
          << setw(25) << numeric_limits<float>::max()<<endl;
    return 0;
}
