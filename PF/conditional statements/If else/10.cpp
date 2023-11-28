// Find Maximum value program in C++ (C Plus Plus)
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "Enter First Value ";
    cin >> a;
    cout << "Enter Second Value ";
    cin >> b;
    cout << "Enter Thrid Value ";
    cin >> c;
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    cout << "The maximun value is " << max << endl;
    return 0;
}