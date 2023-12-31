#include <iostream>
#include <math.h>
using namespace std;

class Polygon
{
public:
    virtual float area() = 0;
    virtual void getSides() = 0;
};

class Triangle : public Polygon
{

    int a, b, c;

public:
    void getSides()
    {

        cout << "\nEnter the sides of the triangle : ";
        cin >> a >> b >> c;
    }
    float area()
    {
        float s = a + b + c;
        s = s / 2.0;
        return (sqrt(s * (s - a) * (s - b) * (s - c)));
    }
};

class Rectangle : public Polygon
{
    int a, b;

public:
    void getSides()
    {
        cout << "\nEnter the length and bredth of the Rectangle : ";
        cin >> a >> b;
    }

    float area()
    {
        return (a * b);
    }
};

int main()
{

    Triangle T;
    Rectangle R;

    T.getSides();
    cout << "Area of Triangle : " << T.area();

    R.getSides();
    cout << "Area of Rectangle : " << R.area();

    return 0;
}