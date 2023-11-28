// Using Protected Constructors
#include <iostream>
using namespace std;

class Base
{
protected:
    int protectedValue;

    Base(int value) : protectedValue(value) {}
};

class Derived : public Base
{
public:
    Derived(int value) : Base(value) {}

    void displayValue()
    {
        cout << "Derived::protectedValue = " << protectedValue << endl;
    }
};

int main()
{
    Derived derived(42);
    derived.displayValue();

    return 0;
}
