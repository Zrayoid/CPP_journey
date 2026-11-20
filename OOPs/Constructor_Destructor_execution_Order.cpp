#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string brand;

public:
    Vehicle(string Brand) : brand(Brand)
    {
        cout << " Vehicle Constructed." << endl;
    }

    void displayBrand()
    {
        cout << " Brand: " << brand << endl;
    }

    ~Vehicle()
    {
        cout << " Vehicle Destructed." << endl;
    }
};

class Car : public Vehicle
{
private:
    string Model;

public:
    Car(string Brand, string Model) : Vehicle(Brand), Model(Model)
    {
        cout << " Car Constructed." << endl;
    }

    void displayModel()
    {
        cout << " Model: " << Model << endl;
    }

    ~Car()
    {
        cout << " Car Destructed." << endl;
    }
};

class ElectricCar : public Car
{
private:
    float batteryCapacity;

public:
    ElectricCar(string Brand, string Model, float BatCap)
        : Car(Brand, Model), batteryCapacity(BatCap)
    {
        cout << " ElectricCar Constructed." << endl;
    }

    void displayEc()
    {
        cout << " Battey Capacity: " << batteryCapacity << endl;
    }

    ~ElectricCar()
    {
        cout << " ElectricCar Destructed." << endl;
    }
};

int main()
{
    // ElectricCar ec("Tesla", "Moderl 3", 75);
    // cout << endl;
    // ec.displayBrand();
    // cout << endl;
    // ec.displayModel();
    // cout << endl;
    // ec.displayEc();
    // cout << endl;

    {
        ElectricCar ec("Tesla", "Model 3", 75);
        cout << endl;
        ec.displayBrand();
        cout << endl;
    }

    cout << "Back in main." << endl;

    return 0;
}