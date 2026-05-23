#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;    
    string author;   
    string ISBN;     

public:
    Book(const std::string& t, const std::string& a, const std::string& isbn)
        : title(t), author(a), ISBN(isbn) {}

    void setTitle(const std::string& t) {
        title = t;
    }
    void setAuthor(const std::string& a) {
        author = a;
    }
    void setISBN(const std::string& isbn) {
        ISBN = isbn;
    }
    void displayDetails() const {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

int main() {
    
    Book book1("1984", "George Orwell", "978-0451524935");
    book1.displayDetails();
    book1.setTitle("Animal Farm");
    book1.setAuthor("George Orwell");
    book1.setISBN("978-0451526342");
    std::cout << std::endl << "Updated Book Details:" << std::endl;
    book1.displayDetails();
}
