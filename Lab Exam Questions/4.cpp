#include <iostream>
using namespace std;

class Complex; // Forward declaration

class Sum {
public:
    int add(Complex, Complex);
};

class Complex {
private:
    int real, imag;
public:
    void setValues(int r, int i) {
        real = r;
        imag = i;
    }
    friend int Sum::add(Complex, Complex);
};

int Sum::add(Complex c1, Complex c2) {
    return (c1.real + c2.real) + (c1.imag + c2.imag);
}
int main() {
     Complex c1, c2;
    c1.setValues(1, 2);
    c2.setValues(3, 4);
    Sum s;
    cout << "Sum of complex numbers: " << s.add(c1, c2) << endl;
    return 0;
}