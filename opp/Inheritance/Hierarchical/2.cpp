//  A Simple Class with Private Data Members and Methods
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;
    myRectangle.setDimensions(5.0, 3.0);

    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;

    return 0;
}
