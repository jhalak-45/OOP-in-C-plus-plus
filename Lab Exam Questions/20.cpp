#include <iostream>
using namespace std;


void multipleCatches() {
    try {
        throw 10.5;
    } catch (int e) {
        cout << "Integer exception: " << e << endl;
    } catch (double e) {
        cout << "Double exception: " << e << endl;
    }
}

int main() {
    multipleCatches();
    return 0;
}