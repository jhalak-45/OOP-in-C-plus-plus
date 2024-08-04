#include <iostream>
using namespace std;

class StaticDemo {
private:
    static int count;
public:
    StaticDemo() {
        count++;
    }
    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int StaticDemo::count = 0;
int main() {
    StaticDemo sd1, sd2, sd3;
    StaticDemo::showCount();
    
    
    return 0;
}