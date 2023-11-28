#include <iostream>
using namespace std;
int main()
{
    float C;
    float F;
    cout << "input temperature in Celsius is= ";
    cin >> C;
    F = C * 9 / 5 + 32;
    cout << "Temperature in Fahrenheit is= " << F;
    return 0;
}