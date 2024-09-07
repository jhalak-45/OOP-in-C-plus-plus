#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int a, b, result;
    cout << "Enter First Number:" << endl;
    cin >> a;
    cout << "Enter Second Number:" << endl;
    cin >> b;

    result = sum(a, b);
    cout << "The sum is: " << result;

    return 0;
}