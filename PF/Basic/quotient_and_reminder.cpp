#include <iostream>
using namespace std;
int main()
{
    int dividen, diviser, x, y;
    cout << "Enter the dividen: ";
    cin >> dividen;
    cout << "enter the diviser: ";
    cin >> diviser;
    x = dividen / diviser;
    y = dividen % diviser;
    cout << "quotient is: " << x << endl;
    cout << "reminder is: " << y;
    return 0;
}