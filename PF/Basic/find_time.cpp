#include <iostream>
using namespace std;
int main()
{
    int t, d, s;
    cout << "Enter the distance: ";
    cin >> d;
    cout << "Enter the speed: ";
    cin >> s;
    t = d / s;
    cout << "\nTime = " << t;
    return 0;
}