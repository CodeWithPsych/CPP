// point class 
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int xCoord, int yCoord) {
        x = xCoord;
        y = yCoord;
    }

    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(-1, 2);

    p1.display();
    p2.display();

    return 0;
}
