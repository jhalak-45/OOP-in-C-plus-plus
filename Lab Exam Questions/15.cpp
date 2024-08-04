#include <iostream>
using namespace std;


class BasePolymorphism {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class DerivedPolymorphism : public BasePolymorphism {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    
    BasePolymorphism *bptrPolymorphism;
    DerivedPolymorphism dPolymorphism;
    bptrPolymorphism = &dPolymorphism;
    bptrPolymorphism->show();
    return 0;
}