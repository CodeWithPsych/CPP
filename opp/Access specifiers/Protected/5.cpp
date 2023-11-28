// Protected Data Members with Accessor Functions
#include <iostream>
using namespace std;

class MyClass {
protected:
    int protectedData;

public:
    MyClass(int value) : protectedData(value) {}

    int getProtectedData() {
        return protectedData;
    }

    void setProtectedData(int value) {
        protectedData = value;
    }
};

int main() {
    MyClass obj(42);
    cout << "Protected Data: " << obj.getProtectedData() << endl;
    obj.setProtectedData(99);
    cout << "Updated Protected Data: " << obj.getProtectedData() << endl;

    return 0;
}
