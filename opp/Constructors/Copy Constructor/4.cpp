#include <iostream>
using namespace std;

class Simple {
private:
    int data;

public:
    Simple(int value) : data(value) {}

    // Copy constructor
    Simple(const Simple& other) : data(other.data) {}

    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Simple original(42);
    Simple copy = original;

    original.displayData(); // Output: Data: 42
    copy.displayData();     // Output: Data: 42

    return 0;
}
