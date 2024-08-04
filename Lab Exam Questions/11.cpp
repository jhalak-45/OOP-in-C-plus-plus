#include <iostream>
using namespace std;

class Dynamic
{
private:
    int *p;

public:
    Dynamic(int val)
    {
        p = new int;
        *p = val;
    }
    void display()
    {
        cout << "Value: " << *p << endl;
    }
    ~Dynamic()
    {
        delete p;
    }
};
int main()
{
    Dynamic d(10);
    d.display();

    return 0;
}