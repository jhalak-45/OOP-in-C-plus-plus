#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int int1 = 10, int2 = 20;
    float float1 = 1.1, float2 = 2.2;
    char char1 = 'A', char2 = 'B';
    swapValues(int1, int2);
    swapValues(float1, float2);
    swapValues(char1, char2);
    cout << "Swapped int: " << int1 << ", " << int2 << endl;
    cout << "Swapped float: " << float1 << ", " << float2 << endl;
    cout << "Swapped char: " << char1 << ", " << char2 << endl;

    return 0;
}