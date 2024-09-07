#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("country.txt"); // or simply country without extension
    fout << "Nepal" << endl;
    fout << "USA" << endl;
    fout << "South Korea" << endl;
    fout.close();

    fout.open("capital.txt"); // or simply capital without extension
    fout << "Kathmandu" << endl;
    fout << "Washington" << endl;
    fout << "Seoul" << endl;
    fout.close();

    // reading files
    char country[50];
    ifstream fin;
    fin.open("country.txt");
    cout << "Countries: " << endl;
    while (fin.getline(country, 50))
    {
        cout << country << endl;
    }
    fin.close();

    fin.open("capital.txt");
    char capital[50];
    
    cout << "Capital Cities: " << endl;
    while (fin.getline(capital, 50))
    {
        cout << capital << endl;
    }
    fin.close();

    return 0;
}
