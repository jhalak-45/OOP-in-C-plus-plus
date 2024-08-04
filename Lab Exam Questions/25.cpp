#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    int roll;
    string name, university_name;
public:
    Student(int r, string n, string u) : roll(r), name(n), university_name(u) {}
    void saveToFile(ofstream &file) {
        file << roll << endl;
        file << name << endl;
        file << university_name << endl;
    }
    void readFromFile(ifstream &file) {
        file >> roll;
        file >> name;
        file >> university_name;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << ", University: " << university_name << endl;
    }
};

int main() {
    Student student1(1, "John", "MIT");
    ofstream outFile("student.txt");
    student1.saveToFile(outFile);
    outFile.close();
    
    Student student2(0, "", "");
    ifstream inFile("student.txt");
    student2.readFromFile(inFile);
    inFile.close();
    student2.display();
    
    return 0;
}
