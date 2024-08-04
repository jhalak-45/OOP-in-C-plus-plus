#include <iostream>
using namespace std;
class Height
{
private:
    int feet, inches;

public:
    Height(int f, int i) : feet(f), inches(i) {}
    Height add(Height h)
    {
        int f = feet + h.feet;
        int i = inches + h.inches;
        if (i >= 12)
        {
            f++;
            i -= 12;
        }
        return Height(f, i);
    }
    void display()
    {
        cout << "Height: " << feet << " feet and " << inches << " inches" << endl;
    }
};

int main()
{
    Height h1(5, 11);
    Height h2(4, 8);
    Height h3 = h1.add(h2);
    h3.display();
    return 0;
}