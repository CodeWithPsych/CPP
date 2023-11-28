#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;

public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    void display() {
        cout << "String: " << str << endl;
    }

    ~String() {
        delete[] str;    // This line deallocates the previously allocated memory for the str character array.
    }
};

int main() {
    String original("Hello, world!");
    String copy = original;

    original.display(); // Output: String: Hello, world!
    copy.display();     // Output: String: Hello, world!

    return 0;
}
