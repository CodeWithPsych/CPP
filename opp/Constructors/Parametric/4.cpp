// circle class 
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle smallCircle(2.0);
    Circle largeCircle(5.0);

    cout << "Area of Small Circle: " << smallCircle.calculateArea() << endl;
    cout << "Area of Large Circle: " << largeCircle.calculateArea() << endl;

    return 0;
}
