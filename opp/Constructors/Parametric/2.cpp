#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    // Parameterized constructor
    MyClass(int value) {
        data = value;
    }

    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Create an object of MyClass with a parameterized constructor
    MyClass obj1(42);

    // Create another object and initialize it with a different value
    MyClass obj2(77);

    // Display the data members of the objects
    obj1.displayData(); // Output: Data: 42
    obj2.displayData(); // Output: Data: 77

    return 0;
}
