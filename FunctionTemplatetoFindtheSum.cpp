#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int intSum = sum(3, 4);
    float floatSum = sum(3.5f, 4.5f);

    cout << "Sum of integers: " << intSum << endl;
    cout << "Sum of floats: " << floatSum << endl;

    return 0;
}
