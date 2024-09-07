#include <iostream>
#include <string.h>
using namespace std;

class Person {
protected:
    char name[100];
    int age;
    char address[100];

public:
    Person(char n[], int a, char addr[]) {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

class Teacher : public Person {
private:
    char qualification[100];
    char department[100];

public:
    Teacher(char n[], int a, char addr[], char q[],  char dept[]) : Person(n, a, addr) {
        strcpy(qualification, q);
        strcpy(department, dept);
    }

    void showData(){
        Person::showData();
        cout << "Qualification: " << qualification << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : public Person {
private:
    char program[100];
    int semester;

public:
    Student(char n[], int a,  char addr[], char prog[], int sem) : Person(n, a, addr) {
        strcpy(program, prog);
        semester = sem;
    }

    void showData(){
        Person::showData();
        cout << "Program: " << program << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    Person person("John Doe", 45, "123 Elm Street");
    Teacher teacher("Alice Smith", 38, "456 Oak Avenue", "PhD", "Mathematics");
    Student student("Bob Johnson", 20, "789 Pine Road", "Computer Science", 3);

    cout << "Person Info:" << endl;
    person.showData();
    cout << endl;

    cout << "Teacher Info:" << endl;
    teacher.showData();
    cout << endl;

    cout << "Student Info:" << endl;
    student.showData();
    cout << endl;

    return 0;
}
