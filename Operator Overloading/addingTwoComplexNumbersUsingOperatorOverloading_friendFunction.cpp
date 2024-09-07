#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " +i " << imag << endl;
    }
    friend Complex operator+(Complex &c1, Complex &c2); // it also return a value
};
Complex operator+(Complex &c1, Complex &c2)
{
    Complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}
int main()
{
    Complex c1(5, 10);
    Complex c2(2, 7);
    Complex c3;
    c3 = c1 + c2; // called internally as c3=operator +(c1,c2);
    // c3=operator +(c1,c2); //we can by this but above is suitable
    c3.display();
    return 0;
}