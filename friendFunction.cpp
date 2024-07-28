#include <iostream>
using namespace std;

class B;//declaration of class B
class C; //declaration of class C

// Class A
class A
{
private:
    int x;

public:
    void getdata()
    {
        cout << "Enter Value of x:" << endl;
        cin >> x;
    }
    friend void sum(A m, B n, C o);//friend function(a non member function) declaration
};

// Class B
class B
{
private:
    int y;

public:
    void getdata()
    {
        cout << "Enter Value of y:" << endl;
        cin >> y;
    }
    friend void sum(A m, B n, C o);
};

//class c
class C
{
private:
    int z;

public:
    void getdata()
    {
        cout << "Enter Value of z:" << endl;
        cin >> z;
    }
    friend void sum(A m, B n, C o);
};
void sum(A m, B n, C o)
{
    int sum;
    sum = m.x + n.y + o.z;
    cout << "The sum is: " << sum << endl;
}
int main()
{
    A p;
    B q;
    C r;
    p.getdata();
    q.getdata();
    r.getdata();

    sum(p, q, r);
}
