#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
private:
    float radius, angle;

public:
    Polar(float r, float a) : radius(r), angle(a) {}
    float getRadius()
    {
        return radius;
    }
    float getAngle()
    {
        return angle;
    }
};

class Rectangular
{
private:
    float x, y;

public:
    Rectangular(Polar p)
    {
        x = p.getRadius() * cos(p.getAngle());
        y = p.getRadius() * sin(p.getAngle());
    }
    void display()
    {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};

int main()
{
    Polar polar(5, 0.927);
    Rectangular rect(polar);
    rect.display();
    return 0;
}