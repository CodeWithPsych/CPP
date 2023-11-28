#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    cout << endl;
    cout << "the values before swapping are: " << a << " and " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "the values after swapping are: " << a << " and " << b;
    return 0;
}