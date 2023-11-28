//  A Class with Private Data Members and Constructors
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    student1.displayInfo();
    student2.displayInfo();

    return 0;
}
