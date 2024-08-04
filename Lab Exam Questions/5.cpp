#include <iostream>
using namespace std;

class Interest {
private:
    float principal, rate, time;
public:
    Interest(float p, float t, float r = 8.0) {
        principal = p;
        time = t;
        rate = r;
    }
    void calculate() {
        float SI = (principal * time * rate) / 100;
        cout << "Simple Interest: " << SI << endl;
    }
};

int main() {
    Interest i1(1000, 2);
    Interest i2(2000, 3, 7);
    Interest i3(1500, 1.5);
    i1.calculate();
    i2.calculate();
    i3.calculate();
    
    
    return 0;
}