#include <iostream>
using namespace std;
int fabnacci(int n);
int main()
{
    int n1;
    cout << "enter the number 1: ";
    cin >> n1;
    cout << fabnacci(n1);
    return 0;
}
int fabnacci(int n)
{
    int x = 0;
    int y = 1;
    int z = 0;
    while (z <= n)
    {
        cout << z << endl;
        x = y;
        y = z;
        z = x + y;
    }
}