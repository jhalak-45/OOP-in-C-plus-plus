#include <iostream>
using namespace std;
class example
{
private:
    int x, y, z;

public:
    example(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void display()
    {
        cout << "x= " << x << " y= " << y << " z= " << z << endl;
    }
    void operator-()
    { // no arguments for unary operator overloading inside class ,if we have using friend function we need to one argumet
     x=-x;
     y=-y;
     z=-z;

    }
    // friend void operator -(example &s); //by using friend function we can apply using this
    
};

// void operator -(example &s){
//     s.x=-s.x;
//     s.y=-s.y;
//     s.z=-s.z;

// }
int main()
{
    example e(5,6,8);
    cout<<"Before operator overloading"<<endl;
    e.display();
    cout<<"After operator overloading"<<endl;
    -e; //called internally as e.operator -() or behind scene 
    // e.operator -(); //it works but above is good technique
    e.display();

    return 0;
}