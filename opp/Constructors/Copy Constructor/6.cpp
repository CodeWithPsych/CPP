#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Copy constructor
    Point(const Point& other) : x(other.x), y(other.y) {}

    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};

int main() {
    Point original(3, 4);
    Point copy = original;

    original.display(); // Output: X: 3, Y: 4
    copy.display();     // Output: X: 3, Y: 4

    return 0;
}
