#include <iostream>
using namespace std;
class example
{
private:
    int x, y, z;

public:
    example()
    {
    }
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
    example operator-()
    { // no arguments for unary operator overloading inside class ,if we have using friend function we need to one argumet
        example temp;

        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }
    // friend example operator-(example &s); // by using friend function we can apply using this
};

// example operator-(example &s)
// {
//     example temp;
//     temp.x = -s.x;
//     temp.y = -s.y;
//     temp.z = -s.z;
//     return temp;
// }
int main()
{
    example e(5, 6, 8);
    example e2;
    cout << "Before operator overloading" << endl;
    e.display();
    cout << "After operator overloading" << endl;
    e2 = -e; // called internally as e2.operator -() or behind scene
    // e2=e.operator -();//it also works but above is good technique
    e2.display();

    return 0;
}