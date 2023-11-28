// Protected Inheritance and Access
#include <iostream>
using namespace std;

class Base {
protected:
    int protectedValue;

public:
    Base(int value) : protectedValue(value) {}
};

class Derived : protected Base {
public:
    Derived(int value) : Base(value) {}

    void displayValue() {
        cout << "Derived::protectedValue = " << protectedValue << endl;
    }
};

int main() {
    Derived derived(42);
    // cout << derived.protectedValue; // Error: 'int Base::protectedValue' is inaccessible
    derived.displayValue();

    return 0;
}
