// palidrom number
#include <iostream>
using namespace std;
int main()
{
    int n, r, t, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (t == sum)
    {
        cout << "Palindrom number";
    }
    else
        cout << "Not a palindrom number";
    return 0;
}