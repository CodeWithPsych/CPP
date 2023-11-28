// Book class 
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(string bookTitle, string bookAuthor) {
        title = bookTitle;
        author = bookAuthor;
    }

    void displayInfo() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book book1("The Catcher in the Rye", "J.D. Salinger");
    Book book2("To Kill a Mockingbird", "Harper Lee");

    book1.displayInfo();
    book2.displayInfo();

    return 0;
}
