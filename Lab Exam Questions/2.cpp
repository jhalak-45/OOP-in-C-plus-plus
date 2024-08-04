#include <iostream>
using namespace std;

class ClassA
{
public:
    int num;
};

class ClassB
{
public:
    int num;
};

class ClassC
{
public:
    int num;
    void findLargest(ClassA a, ClassB b, ClassC c, int d)
    {
        int largest = a.num;
        if (b.num > largest)
        {
            largest = b.num;
        }
        if (c.num > largest)
        {
            largest = c.num;
        }
        if (d > largest)
        {
            largest = d;
        }
        cout << "Largest number: " << largest << endl;
    }
};
int main()
{
    ClassA a;
    ClassB b;
    ClassC c;
    a.num = 50;
    b.num = 20;
    c.num = 30;
    c.findLargest(a, b, c, 40);
    return 0;
}