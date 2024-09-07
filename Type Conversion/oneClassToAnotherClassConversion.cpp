/*
  we can convert one class type data to anothe type ;
  example:
        objX=objY // objects of different class
    let objX be the object of class X and objY is object of class Y,here as given in example
    the class y data is converted into class X and the value is assigned to objX.
    Since the conversion takes place from Class Y to class X,
    Y class is source class and X is the destination class;


    such conversion between objects of different class can be carried out by either a constructor
    or a conversion functions.
Note:
    =>conversion from a class to any other type should make use of casting operator
    in the source class
    =>on other hand to perform the conversion from any other type/lass type constructor
     should be used in destination class

Example: convert polar to rectangle co-ordinated by conversion function in source class.
*/

#include <iostream>
#include <math.h>
using namespace std;
class Rectangle
{
private:
    float xco;
    float yco;

public:
    Rectangle()
    {
        xco = 0;
        yco = 0;
    }
    Rectangle(float x, float y)
    {
        xco = x;
        yco = y;
    }
    void display()
    {
        cout << "(" << xco << "," << yco << ")" << endl;
    }
};
class Polar
{
private:
    float radius;
    float angle;

public:
    Polar()
    {
        radius = 0.0;
        angle = 0.0;
    }
    Polar(float r, float a)
    {
        radius = r;
        angle = a;
    }

    void display()
    {
        cout << "(" << radius << "," << angle << ")" << endl;
    }

    operator Rectangle()
    {
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        return Rectangle(x, y);
    }
};

int main()
{
    Polar p(10.0, 0.758539);
    Rectangle r;
    r = p;
    cout << "Polar co-ordinates:" << endl;
    p.display();
    cout << "Rectangle Co-ordinates:" << endl;
    r.display();
    return 0;
}