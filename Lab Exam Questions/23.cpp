#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing "Hello" to a file
    ofstream file;
    file.open("example.txt");
    if (!file) {
        cerr << "File could not be opened for writing!" << endl;
        return 1;
    }
    file << "Hello" << endl;
    file.close();
    
    // Reading from file
    ifstream fileread;
    fileread.open("example.txt");
    if (!fileread) {
        cerr << "File could not be opened for reading!" << endl;
        return 1;
    }

    string line;
    while (getline(fileread, line)) {
        cout << line << endl;
    }
    
    fileread.close();

    return 0;
}
