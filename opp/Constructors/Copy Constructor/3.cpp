#include<iostream>
using namespace std;
void room(int &a, int &b);
class Wall {
public:
    int length;
    int width;
    int area() {
        return length * width;
    }
};
void room(int &a, int &b) { 
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
}
int main() {
    int a, b; 
    room(a, b); 
    Wall w1;
    w1.length=a;
    w1.width=b;
    cout << "Area of the wall: " << w1.area() << endl;
    return 0;
}