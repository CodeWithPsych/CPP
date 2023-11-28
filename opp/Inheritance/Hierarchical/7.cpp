//  Employee Class
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeId;

public:
    Employee(string n, int id) {
        name = n;
        employeeId = id;
    }

    void displayInfo() {
        cout << "Employee ID: " << employeeId << ", Name: " << name << endl;
    }
};

int main() {
    Employee emp1("Alice Johnson", 101);
    Employee emp2("Bob Smith", 102);

    emp1.displayInfo();
    emp2.displayInfo();

    return 0;
}
