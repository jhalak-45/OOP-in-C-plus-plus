#include <iostream>
using namespace std;
void sum()
{
    int a, b, sum;

    cout << "Enter Sirst Number:" << endl;
    cin >> a;
    cout << "Enter Second Number:" << endl;
    cin >> b;
    
    sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum;
}
int main()
{
    sum();
    return 0;
}