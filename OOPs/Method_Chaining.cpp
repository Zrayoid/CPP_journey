#include <iostream>
using namespace std;

class Rectangle
{
    private:
        float length;
        float width;

    public:

    Rectangle(float len, float wid) 
        : length(len), width(wid){}

    Rectangle* setLength( float length)
    {
        this->length = length;
        return this;
    }

    Rectangle* setWidth( float width)
    {
        this->width = width;
        return this;
    }

    float area()
    {
        return length*width;
    }

    void display()
    {
        cout << " Length of the Rectangle: "<< length << endl;
        cout << " Width of the Rectangle: "<< width << endl;
        cout << " Area of the Rectangle: "<< area() << endl;
    }

    ~Rectangle(){}


};

int main()
{
    Rectangle r(0, 0);
    r.setLength(10.2)->setWidth(5.5)->display();
    return 0;
}