#include <iostream>
using namespace std;

class College {
protected:
    string collegeName;
public:
    College(string cName) : collegeName(cName) {}
    void display() {
        cout << "College Name: " << collegeName << endl;
    }
};

class Student : virtual public College {
protected:
    string studentName;
public:
    Student(string sName, string cName) : College(cName), studentName(sName) {}
    void display() {
        College::display();
        cout << "Student Name: " << studentName << endl;
    }
};

class Teacher : virtual public College {
protected:
    string teacherName;
public:
    Teacher(string tName, string cName) : College(cName), teacherName(tName) {}
    void display() {
        College::display();
        cout << "Teacher Name: " << teacherName << endl;
    }
};

class Books : public Student, public Teacher {
private:
    string bookName;
public:
    Books(string bName, string sName, string tName, string cName) : Student(sName, cName), Teacher(tName, cName), College(cName), bookName(bName) {}
    void display() {
        Student::display();
        Teacher::display();
        cout << "Book Name: " << bookName << endl;
    }
};
int main() {
    Books book("Physics", "Alice", "Dr. Smith", "Harvard");
    book.display();
    
    return 0;
}