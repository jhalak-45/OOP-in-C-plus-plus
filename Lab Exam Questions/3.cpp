#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int value;
public:
    void setValue(int val) {
        value = val;
    }
    void display() {
        cout << "ClassA value: " << value << endl;
    }
    friend void swap(ClassA &, ClassB &);
};

class ClassB {
private:
    int value;
public:
    void setValue(int val) {
        value = val;
    }
    void display() {
        cout << "ClassB value: " << value << endl;
    }
    friend void swap(ClassA &, ClassB &);
};

void swap(ClassA &a, ClassB &b) {
    int temp = a.value;
    a.value = b.value;
    b.value = temp;
}
int main() {
    ClassA objA;
    ClassB objB;
    objA.setValue(100);
    objB.setValue(200);
    cout << "Before swap:" << endl;
    objA.display();
    objB.display();
    swap(objA, objB);
    cout << "After swap:" << endl;
    objA.display();
    objB.display();
    return 0;
}