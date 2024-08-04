#include <iostream>

class class1; // Forward declaration

class class2 {
private:
    int value;
public:
    void setValue(int v) {
        value = v;
    }

    friend void max(class1&, class2&);
};

class class1 {
private:
    int value;
public:
    void setValue(int v) {
        value = v;
    }

    friend void max(class1&,class2&);
};

void max( class1& obj1, class2& obj2) {
    int maxVal = (obj1.value > obj2.value) ? obj1.value : obj2.value;
    std::cout << "Maximum value: " << maxVal << std::endl;
}

int main() {
    class1 obj1;
    class2 obj2;

    obj1.setValue(10);  // Set value for class1 object
    obj2.setValue(20);  // Set value for class2 object

    max(obj1, obj2);    // Display the maximum value

    return 0;
}
