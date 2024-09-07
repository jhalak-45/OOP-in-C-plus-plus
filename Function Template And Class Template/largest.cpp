#include <iostream>
using namespace std;

template <typename T>
T largest(T a, T b) {
    return (a > b) ? a : b; //conditonal operator : if a is greater than b then return a otherwise b
}

int main() {
    int int1 = 5, int2 = 10;
    char char1 = 'a', char2 = 'z';
    float float1 = 5.5, float2 = 10.5;

    cout << "Largest integer: " << largest(int1, int2) << endl;
    cout << "Largest character: " << largest(char1, char2) << endl;
    cout << "Largest float: " << largest(float1, float2) << endl;

    return 0;
}
