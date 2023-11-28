#include <iostream>
using namespace std;
int main()
{
    int len;
    int width;
    int area = 0;
    int par = 0;
    cout << "Enter Length of the Rectangle: " << endl;
    cin >> len;
    cout << "Enter widthh of the Rectangle: " << endl;
    cin >> width;
    area = len * width;
    par = 2 * (len + width);
    cout << "Area of Rectangle is: " << area << endl;
    cout << "Parameters of Rectangle Are: " << par << endl;
    return 0;
}