// Inheritance with Protected Members
#include <iostream>
using namespace std;

class Base
{
protected:
    int protectedValue;

public:
    Base(int value) : protectedValue(value) {}

    void display()
    {
        cout << "Base::protectedValue = " << protectedValue << endl;
    }
};

class Derived : protected Base
{
public:
    Derived(int value) : Base(value) {}

    void changeValue(int newValue)
    {
        protectedValue = newValue;
    }

    void displayValue()
    {
        display();
    }
};

int main()
{
    Derived derived(42);
    // derived.display(); // Error: 'Base::display' is inaccessible
    derived.changeValue(99);
    derived.displayValue();

    return 0;
}
