#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float c, d;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout << "Enter the third value: ";
    cin >> c;
    cout << "Enter the forth value: ";
    cin >> d;
    cout << endl;
    a *= b;
    c /= d;
    cout << "the first value is: " << a << endl;
    cout << "second value: " << c;
    return 0;
}