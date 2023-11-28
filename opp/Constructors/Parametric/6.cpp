// Rectangle class 
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle smallRectangle(3.0, 4.0);
    Rectangle largeRectangle(5.0, 7.0);

    cout << "Area of Small Rectangle: " << smallRectangle.calculateArea() << endl;
    cout << "Area of Large Rectangle: " << largeRectangle.calculateArea() << endl;

    return 0;
}
