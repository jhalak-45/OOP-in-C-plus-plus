/*
Basic to Class Type Conversion
the constructor is used for the type conversion and
it takes the single argument which type is to be converted.
for eg: minute to hour and minutes, kb to mb,gb,kb, meter to feet and inches

-> simply we can understand it by (one value to many values like memory in kb to mb,gb,kb).

the program to illustrate basic to class type conversion is given below:
Minute to Hours and minutes
*/
#include <iostream>
using namespace std;
class time
{
    int hours;
    int minutes;

public:
    time()
    {
    }
    time(int t)
    {
        hours = t / 60;
        minutes = t % 60;
    }

    void display()
    {
        cout << "Hours: " << hours << endl;
        cout << "Minutes:"<< minutes << endl;
    }
};

int main()
{
    int minutes = 65;
    time t1;
    t1 = minutes;
    t1.display();

    return 0;
}