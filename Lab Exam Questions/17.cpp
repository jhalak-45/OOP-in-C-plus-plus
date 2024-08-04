#include <iostream>
#include<math.h>
using namespace std;

class Rect {
private:
    float x, y;
public:
    Rect(float xVal, float yVal) : x(xVal), y(yVal) {}
    float getX() { return x; }
    float getY() { return y; }
};

class PolarCoord {
private:
    float radius, angle;
public:
    PolarCoord(Rect r) {
        radius = sqrt(r.getX() * r.getX() + r.getY() * r.getY());
        angle = atan(r.getY() / r.getX());
    }
    void display() {
        cout << "Radius: " << radius << ", Angle: " << angle << endl;
    }
};
int main() {
    Rect rectCoord(3, 4);
    PolarCoord polarCoord(rectCoord);
    polarCoord.display();
    
    return 0;
}