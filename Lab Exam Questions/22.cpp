#include <iostream>
#include<math.h>
using namespace std;

template <typename T>
void findRoots(T a, T b, T c) {
    T discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        T root1 = (-b + sqrt(discriminant)) / (2 * a);
        T root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        T root = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root: " << root << endl;
    } else {
        T realPart = -b / (2 * a);
        T imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}
int main() {
        findRoots(1, -7, 10);

    return 0;
}