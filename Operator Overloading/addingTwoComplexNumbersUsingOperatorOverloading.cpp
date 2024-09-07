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
    void operator +(Complex &c)
    {
        real = real + c.real;
        imag = imag + c.imag;
    }
};

int main()
{
    Complex c1(5, 10);
    Complex c2(2, 7);
    c1 + c2;//called internally as c1.operator +(c2);
    //c1.operator +(c2); we can by this but above is suitable 
    c1.display();
    return 0;
}