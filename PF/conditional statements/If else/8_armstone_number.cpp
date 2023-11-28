// Armstrong Number
#include <iostream>
using namespace std;
int main()
{
    int n, temp, rem, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "Armstone number";
    }
    else
        cout << "Not a Armstone number";
    return 0;
}