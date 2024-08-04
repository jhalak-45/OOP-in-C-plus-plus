#include <iostream>
using namespace std;

class Address {
private:
    string city, state;
public:
    Address(string c, string s) : city(c), state(s) {}
    void display() {
        cout << "City: " << city << ", State: " << state << endl;
    }
};

class Employee {
private:
    string name;
    Address *address;
public:
    Employee(string n, Address *a) : name(n), address(a) {}
    void display() {
        cout << "Name: " << name << endl;
        address->display();
    }
};


int main() {
    Address addr("NYC", "NY");
    Employee emp("John", &addr);
    emp.display();
    return 0;
}