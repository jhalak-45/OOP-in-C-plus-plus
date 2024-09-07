#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, *ptr;

    cout << "Enter total number elements:" << endl;
    cin >> n;
    ptr = new int[n];//memory allocation for n  integers 

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
        sum = sum + ptr[i];
    }
    cout<<"Entered Elements:";
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i]<<" ";
    }

    cout << endl<<"Total Sum:" << sum << endl;

    delete[] ptr;//it deallocates the memory allocated by ptr of size n
    cout<<"Cleared Memory"<<endl;
    return 0;
}