// working in single file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[50];
    float cost;
    ofstream outfile("items.txt");

    cout << "Enter Name Of Product: " << endl;
    cin >> name;
    outfile << name << endl;

    cout << "Enter Cost: " << endl;
    cin >> cost;
    outfile << cost << endl;
    outfile.close();

    ifstream infile("items.txt");
    infile >> name;
    infile >> cost;

    cout << "Product Name: " << name << endl;
    cout << "Cost: " << cost << endl;

    infile.close();
    return 0;
}