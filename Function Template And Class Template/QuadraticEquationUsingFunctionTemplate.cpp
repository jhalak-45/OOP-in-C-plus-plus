#include <iostream>
#include <cmath> //or we can use math.h library file
using namespace std;
template <class T>


void Roots(T a, T b, T c) {
    T discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        T root1 = (-b + sqrt(discriminant)) / (2 * a);
        T root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different: " << root1 << " " << root2 << endl;
    } else if (discriminant == 0) {
        T root = -b / (2 * a);
        cout << "Roots are real and same: " << root << endl;
    } else {
        T realPart = -b / (2 * a);
        T imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    Roots(1.0, -3.0, 2.0);  // For float
    Roots(1, -2, 1);        // For int

    return 0;
}
