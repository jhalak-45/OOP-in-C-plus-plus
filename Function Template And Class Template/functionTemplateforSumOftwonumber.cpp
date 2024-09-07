#include <iostream>
using namespace std;
template <class  T>

class Arithmetic {
public:
    T a, b;

    Arithmetic(T x, T y) : a(x), b(y) {}

    T sum() {
        return a + b;
    }

    T product() {
        return a * b;
    }
};

int main() {
    Arithmetic<int> intArith(3, 4);
    Arithmetic<float> floatArith(3.5f, 4.5f);

    cout << "Sum of integers: " << intArith.sum() << endl;
    cout << "Product of integers: " << intArith.product() << endl;

    cout << "Sum of floats: " << floatArith.sum() << endl;
    cout << "Product of floats: " << floatArith.product() << endl;

    return 0;
}
