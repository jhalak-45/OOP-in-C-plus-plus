#include <iostream>
using namespace std;

class fibo
{
private:
    int a, b, c;
public:
    fibo()
    {
        a = -1;
        b = 1;
        c = a + b;
    }
    void display()
    {
        cout << c << " ";
    }
    void operator++()
    {
        a = b;
        b = c;
        c = a + b;
    }
};
int main()
{
    int n = 10;
    fibo f;
    for (int i = 0; i < n; i++)
    {
        f.display();
        ++f;
    }

    return 0;
}