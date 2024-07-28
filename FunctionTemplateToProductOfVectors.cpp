#include <iostream>
using namespace std;
template <class T>

class Vector {
private:
    T x, y, z;

public:
    Vector(T x, T y, T z){
        this->x=x;
        this->y=y;
        this->z=z;
    }

    T scalarProduct(Vector v){
        return (x * v.x) + (y * v.y) + (z * v.z);
    }

    void print() {
        cout << "(" << x << ", " << y << ", " << z << ")"<<endl;
    }
};

int main() {
    Vector<int> intVector1(1, 2, 3);
    Vector<int> intVector2(4, 5, 6);

    Vector<float> floatVector1(1.1f, 2.2f, 3.3f);
    Vector<float> floatVector2(4.4f, 5.5f, 6.6f);

    cout << "Integer vector 1: "<<endl;
    intVector1.print();
    cout <<"Integer vector 2: "<<endl;
    intVector2.print();
    cout << "Scalar product of integer vectors: " << intVector1.scalarProduct(intVector2) << endl;

    cout << "Float vector 1: "<<endl;
    floatVector1.print();
    cout << "Float vector 2: "<<endl;
    floatVector2.print();
    cout << "Scalar product of float vectors: " << floatVector1.scalarProduct(floatVector2) << endl;

    return 0;
}
