/* 
 Passing object as argument and return object in c++
 Program to add time(hours,minutes and seconds);
*/
#include <iostream>
using namespace std;

class Time
{
  private:
    int hours, minutes, seconds;

 public:
    void gettime();
    void display();
    Time addtime(Time t1, Time t2);
};
void Time::gettime()
{
    cout << "Enter Hours:" << endl;
    cin >> hours;

    cout << "Enter Minutes:" << endl;
    cin >> minutes;

    cout << "Enter Seconds:" << endl;
    cin >> seconds;
}
void Time::display()
{
    cout << "The Time is [H:M:S]: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
Time Time::addtime(Time t1, Time t2)
{
    Time temp;
    temp.seconds = t1.seconds + t2.seconds;
    temp.minutes = temp.seconds / 60;
    temp.seconds = temp.seconds % 60;
    temp.minutes = temp.minutes + t1.minutes + t2.minutes;
    temp.hours = temp.minutes / 60;
    temp.minutes = temp.minutes % 60;
    temp.hours = temp.hours + t1.hours + t2.hours;
    return temp;
}
int main()
{
    Time t1, t2, result;

    cout << "Enter First Time:" << endl;
    t1.gettime();
    cout << "Enter Second Time:" << endl;
    t2.gettime();

    result = result.addtime(t1, t2);

    result.display();

    return 0;
}