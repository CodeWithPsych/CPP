//  Protected Copy Constructor and Friend Class
#include <iostream>
using namespace std;

class Base {
public:
    int protectedValue;

    Base(int value) : protectedValue(value) {}
};

class FriendClass {
public:
    void displayValue(Base& obj) {
        cout << "FriendClass::protectedValue = " << obj.protectedValue << endl;
    }

    void modifyValue(Base& obj, int newValue) {
        obj.protectedValue = newValue;
    }
};

int main() {
    Base obj(42);
    FriendClass friendObj;
    friendObj.displayValue(obj);
    friendObj.modifyValue(obj, 99);
    friendObj.displayValue(obj);

    return 0;
}
