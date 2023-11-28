#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Copy constructor
    Rectangle(const Rectangle &other) : length(other.length), width(other.width) {}

    double calculateArea()
    {
        return length * width;
    }

    void display()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main()
{
    Rectangle original(3.0, 4.0);
    Rectangle copy = original;

    original.display();                                   // Output: Length: 3, Width: 4
    cout << "Area: " << original.calculateArea() << endl; // Output: Area: 12
    copy.display();                                       // Output: Length: 3, Width: 4

    return 0;
}
