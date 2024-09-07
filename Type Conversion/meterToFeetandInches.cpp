#include <iostream>
using namespace std;

class Height
{
private:
    int feet;
    float inches;

public:
Height(){

}
Height(float m){
    float f=3.28082*m;//meter converted into feet 
    feet=int(f);//type casting , float type feet into integer type
    inches=12*(f-feet);
}
void display(){
    cout<<feet<<" feet and "<<inches<<" inches "<<endl;
}
};
int main()
{
    float meter;
    Height h1;
    cout<<"Enter height in meter:"<<endl;
    cin>>meter;

    h1=meter;
    cout<<"height in feet and inches is: "<<endl;
    h1.display();


    return 0;
}