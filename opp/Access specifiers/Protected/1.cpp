// Basic Protected Members
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

class Derived : public Base
{
public:
    Derived(int value) : Base(value) {}

    void changeValue(int newValue)
    {
        protectedValue = newValue;
    }
};

int main()
{
    Derived derived(42);
    derived.display();
    derived.changeValue(99);
    derived.display();

    return 0;
}
