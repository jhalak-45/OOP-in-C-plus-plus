/*Create classes called class1 and class2 with each of having one private member .Add member
function to set a value(say setvalue) one each class. Add one more function max() that is
friendly to both classes. max() function should compare two private member of two classes
and show maximum among them. Create one-one object of each class and then set a value
on them. Display the maximum number among them.*/

#include <iostream>
using namespace std;
class class2; // Forward declaration

class class1 {
private:
    int value;
public:
    void setValue(int val) {
        value = val;
    }
    friend void max(class1, class2);
};

class class2 {
private:
    int value;
public:
    void setValue(int val) {
        value = val;
    }
    friend void max(class1, class2);
};

void max(class1 obj1, class2 obj2) {
    if (obj1.value > obj2.value) {
        cout << "Maximum value: " << obj1.value << endl;
    } else {
        cout << "Maximum value: " << obj2.value << endl;
    }
}
int main() {
    class1 obj1;
    class2 obj2;
    obj1.setValue(10);
    obj2.setValue(20);
    max(obj1, obj2);
    return 0;
}