#include <iostream>
using namespace std;
template <class T>

void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 5.5, float2 = 10.5;

    cout << "Before swapping: " << int1 << " " << int2 << endl;
    swapValues(int1, int2);
    cout << "After swapping: " << int1 << " " << int2 << endl;

    cout << "Before swapping: " << float1 << " " << float2 << endl;
    swapValues(float1, float2);
    cout << "After swapping: " << float1 << " " << float2 << endl;

    return 0;
}
