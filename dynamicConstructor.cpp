#include <iostream>
using namespace std;
class Complex{
    private:
    int *real,*imag;
    public:
    Complex(int r=0,int i=0){
        real=new int;
        *real=r;
        imag=new int ;
        *imag=i;
    }
    void display(){
        cout<<*real<<"+i"<<*imag<<endl;
    }
    void addComplex(Complex c1,Complex c2){
        *real=*c1.real+*c2.real;
        *imag=*c1.imag+*c2.imag;
    }


};
int main() {
    Complex c1(1,1);
    Complex c2(5,15);
    Complex c3;
    c3.addComplex(c1,c2);

    c3.display();
    return 0;
}