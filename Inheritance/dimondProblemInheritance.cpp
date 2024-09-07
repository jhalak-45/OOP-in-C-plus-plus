#include <iostream>
#include <string.h>
using namespace std;

class College
{
protected:
    char name[50];
    char location[50];

public:
    College(char n[], char loc[])
    {
        strcpy(name, n);
        strcpy(location, loc);
    }
    void displayCollegeInfo()
    {
        cout << "College Name: " << name << endl;
        cout << "Location: " << location << endl;
    }
};

class Student : virtual public College
{
private:
    char studentName[50];
    int roll_no;

public:
    Student(char n[], char loc[], char sName[], int r_no) : College(n, loc)
    {
        strcpy(studentName, sName);
        roll_no = r_no;
    }
    void displayStudentInfo()
    {
        cout << "Student Name: " << studentName << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

class Teacher : virtual public College
{
private:
    char teacherName[50];
    int code;

public:
    Teacher(char n[], char loc[], char tName[], int c) : College(n, loc)
    {
        strcpy(teacherName, tName);
        code = c;
    }
    void displayTeacherInfo()
    {
        cout << "Teacher Name: " << teacherName << endl;
        cout << "Code: " << code << endl;
    }
};

class Books : public Student, public Teacher
{
private:
    char bookName[50];
    char writerName[50];
    int book_code;

public:
    Books(char n[], char loc[], char sName[], int r_no, char tName[], int c, char bName[], char wName[], int b_code)
        : College(n, loc), Student(n, loc, sName, r_no), Teacher(n, loc, tName, c)
    {
        strcpy(bookName, bName);
        strcpy(writerName, wName);
        book_code = b_code;
    }
    void displayBookInfo()
    {
        cout<<"College Information: "<<endl;
        displayCollegeInfo();
        cout<<endl;

        cout<<"Teacher Information: "<<endl;
        displayTeacherInfo();
        cout<<endl;

        cout<<"Student Information: "<<endl;
        displayStudentInfo();
        cout<<endl;

        cout<<"Book Information: "<<endl;
        cout<< "Book Name: " << bookName << endl;
        cout << "Writer Name: " << writerName << endl;
        cout << "Book Code: " << book_code << endl;
    }
};

int main()
{
    Books book("Everest Engineering College", "Kathmandu", "Ram Dhami std", 50, "Ram sir", 5005, "C++ Programming", "Bjarne Stroustrup",1001);
    book.displayBookInfo();

    return 0;
}
