#include <iostream>
using namespace std;

int sum()
{
    int a, b, sum;

    cout << "Enter first Number:" <<endl;
    cin >> a;
    cout << "Enter Second Number:" <<endl;
    cin >> b;

    sum = a + b;
    return sum;
}
int main()
{
    int result;
    result = sum();
    cout << "The sum is: "<<result;

    return 0;
}