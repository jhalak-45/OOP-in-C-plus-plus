#include <iostream>
using namespace std;
class Height
{
private:
    int feet;
    float inches;
public:
Height(int f,float i){
    feet=f;
    inches=i;
}
void display(){
    cout<<"Feet: "<<feet<<endl;
    cout<<"Inches: "<<inches<<endl;

}
operator float(){
    float f=inches/12;
    f=feet+f;
    return (f*3.28083);

}
};

int main()
{
    float meter;
    Height h1(4,10.5);

    meter=h1;
    h1.display();
    cout<<"Feet and inches in Meter = "<<meter;

    return 0;
}