#include <iostream>
using namespace std;

class Kilogram {
private:
    float kg;
public:
    Kilogram(float k) : kg(k) {}
    float getKg() { return kg; }
};

class Gram {
private:
    float gm;
public:
    Gram(Kilogram k) {
        gm = k.getKg() * 1000;
    }
    void display() {
        cout << "Grams: " << gm << endl;
    }
};
int main() {
     Kilogram kg(2);
    Gram gm(kg);
    gm.display();
    return 0;
}