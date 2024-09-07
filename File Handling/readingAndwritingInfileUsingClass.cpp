#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Inventory
{
private:
    char name[100];
    int id;
    float price;
    char mfd[50];

public:
    void readData()
    {
        cout << "Enter Product ID: " << endl;
        cin >> id;
        cout << "Enter  Name: " << endl;
        cin >> name;
        cout << "Enter Price: " << endl;
        cin >> price;
        cout << "Enter  Manufacture Date (dd/mm/yyy): " << endl;
        cin >> mfd;
    }
    void writeData()
    {
        cout << "Product ID :#" << id << endl;
        cout << "Name :" << name << endl;
        cout << "Price :" << price << endl;
        cout << "Manufacture Date :" << mfd << endl;
    }
};

int main()
{
    int n;
    cout << "Enter Number of Products: " << endl;
    cin >> n;

    Inventory item[n];
    fstream file;
    file.open("stock.dat", ios::in|ios::out|ios::app);

    cout << "Enter Details of " << n << " Items " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "->Product #" << i + 1 << endl;
        item[i].readData();
        file.write((char *)&item[i], sizeof(item[i]));
    }
    file.seekg(0);
    cout<<endl<<"-------------------"<<endl;
    cout << "List of Products:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "->Product #" << i + 1 << endl;
        file.read((char *)&item[i], sizeof(item[i]));
        item[i].writeData();
    }
    file.close();
    return 0;
}