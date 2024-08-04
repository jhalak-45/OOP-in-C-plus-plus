#include <iostream>
using namespace std;

class Book {
private:
    string bookName, publicationName;
    int publishedYear, price;
public:
    Book(string bName, string pName, int pYear, int pr) : bookName(bName), publicationName(pName), publishedYear(pYear), price(pr) {}
    void cmpPrice(Book b) {
        if (price < b.price) {
            display();
        } else {
            b.display();
        }
    }
    void display() {
        cout << "Book Name: " << bookName << endl;
        cout << "Publication Name: " << publicationName << endl;
        cout << "Published Year: " << publishedYear << endl;
        cout << "Price: " << price << endl;
    }
};


int main() {
    Book book1("C++", "XYZ", 2000, 500);
    Book book2("Java", "ABC", 1999, 300);
    cout << "Book with lower price: " << endl;
    book1.cmpPrice(book2);
    return 0;
}