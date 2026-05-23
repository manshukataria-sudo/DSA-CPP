#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Library {
private:
    vector<string> books;
public:
    void addBook(string bookTitle) {
        books.push_back(bookTitle);
    }
    void removeBook(string bookTitle) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (*it == bookTitle) {
                books.erase(it);
                return;
            }
        }
        cout << "Book not found: " << bookTitle << endl;
    }
    void displayBooks() {
        if (books.empty()) {
            cout << "No books in the library." << endl;
            return;
        }
        cout << "Books in the library:" << endl;
        for (string book : books) {
            cout << "- " << book << endl;
        }
    }
};
int main() {
    Library myLibrary;
    myLibrary.addBook("Five Point Someone by Chetan Bhagat");
    myLibrary.addBook("The Guide by R.K. Narayan");
    myLibrary.addBook("The God of Small Things by Arundhati Roy");
    myLibrary.addBook("Midnight's Children by Salman Rushdie");
    myLibrary.addBook("Train to Pakistan by Khushwant Singh");
    // Display books
    myLibrary.displayBooks();
    // Remove a book
    myLibrary.removeBook("The Guide by R.K. Narayan");
    // Display books again
    myLibrary.displayBooks();
    // Try to remove a non-existing book
    myLibrary.removeBook("The Alchemist by Paulo Coelho");
}
