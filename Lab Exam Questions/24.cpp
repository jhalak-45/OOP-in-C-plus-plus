#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readWriteMultipleFiles()
{
    ifstream inFile1("file1.txt");
    ifstream inFile2("file2.txt");
    ofstream outFile("output.txt");

    if (!inFile1 || !inFile2 || !outFile) {
        cerr << "Error opening files!" << endl;
        return;
    }

    string line;
    while (getline(inFile1, line)) {
        outFile << line << endl;
    }

    while (getline(inFile2, line)) {
        outFile << line << endl;
    }

    inFile1.close();
    inFile2.close();
    outFile.close();
}

int main()
{
    readWriteMultipleFiles();

    return 0;
}
