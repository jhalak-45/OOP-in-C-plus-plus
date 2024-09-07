#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int sum;
    sum = a + b;
    cout << "The sum is: " << sum;
}
int main()
{
    int a, b;
    cout << "Enter First Number:" << endl;
    cin >> a;
    cout << "Enter Second Number:" << endl;
    cin >> b;

    sum(a, b);

    return 0;
}