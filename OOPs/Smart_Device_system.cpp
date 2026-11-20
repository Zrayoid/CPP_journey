#include <iostream>
#include <string>
using namespace std;

class Phone
{
private:
    long long int phoneNumber;

    long long int verifyNum(long long int num)
    {
        return (num >= 1000000000 && num <= 9999999999) ? num : 1000000000;
    }

public:
    Phone(long long int number) : phoneNumber(verifyNum(number)) {}

    void makeCall()
    {
        cout << " Phone Number: " << phoneNumber << endl;
    }

    void displayInfo()
    {
        cout << "Phone Number: " << phoneNumber << endl;
    }


    ~Phone() {}
};

class Camera
{
private:
    int cameraResolution;

public:
    Camera(int cR) : cameraResolution(cR) {}

    void takePhoto()
    {
        cout << "Camera Resolution: " << cameraResolution << "mp" << endl;
    }

    void displayInfo()
    {
        cout << "Camera Resolution: " << cameraResolution << endl;
    }


    ~Camera() {}
};

class SmartPhone : public Phone, public Camera
{
private:
    string brand;

public:
    SmartPhone(string br, long long int number, int cR) : Phone(number), Camera(cR), brand(br) {}

    void displayBrand()
    {
        cout << "Brand: " << brand << endl;
    }

    
    ~SmartPhone() {}
};

int main()
{
    SmartPhone sp("Samsung", 9876543210, 108);

    sp.displayBrand();
    sp.takePhoto();
    sp.makeCall();

    cout << endl;
    sp.Phone::displayInfo();
    sp.Camera::displayInfo();
    return 0;
}