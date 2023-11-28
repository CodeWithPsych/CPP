// Protected Member Functions
#include <iostream>
using namespace std;

class Base {
protected:
    int protectedValue;

public:
    Base(int value) : protectedValue(value) {}

    void display() {
        cout << "Base::protectedValue = " << protectedValue << endl;
    }
};

class Derived : public Base {
public:
    Derived(int value) : Base(value) {}

protected:
    void modifyValue(int newValue) {
        protectedValue = newValue;
    }

public:
    void updateValue(int newValue) {
        modifyValue(newValue);
    }
};

int main() {
    Derived derived(42);
    derived.display();
    derived.updateValue(99);
    derived.display();

    return 0;
}
