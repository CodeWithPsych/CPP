// Write a function to compute the square - root of a given number.If the given number is negative, 
// your function should give an error message.
#include <iostream>
#include <cmath>
using namespace std;
double square_root(double n)
{
    if (n < 0)
    {
        cerr << "Error: Sorry, cannot compute square root of a negative Number" << endl;
        return -1;
    }
    else
    {
        return sqrt(n);
    }
}
int main()
{
    double Number;
    cout << "Please Enter a Number to Calculate the square root of the given number ";
    cin >> Number;
    double Display = square_root(Number);
    if (Display >= 0)
    {
        cout << "The square root of " << Number << " is " << Display << endl;
    }
    return 0;
}