#include <iostream>
using namespace std;
class memory
{
private:
    int mb;
    int kb;
    int byte;

public:
    memory()
    {
        
    }
    memory(int m)
    {
        int rem;
        mb = m / (1024 * 1024);
        rem = m % (1024 * 1024);
        kb = rem / 1024;
        byte = rem % 1024;
    }
    void display()
    {
        cout << mb << " MB" << endl;
        cout << kb << " KB" << endl;
        cout << byte << " Bytes " << endl;
    }
};

int main()
{
    long int m = 1087665;
    memory m1;
    m1 = m;
    m1.display();

    return 0;
}