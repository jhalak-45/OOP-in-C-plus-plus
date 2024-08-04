#include <iostream>
using namespace std;

void exceptionHandling()
{
    try
    {
        int a = 10, b = 0;
        if (b == 0)
            throw "Division by zero condition!";
        else
            cout << a / b << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
}
int main()
{
    exceptionHandling();

    return 0;
}