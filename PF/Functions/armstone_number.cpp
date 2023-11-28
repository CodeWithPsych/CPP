#include <iostream>
using namespace std;
int armstone(int a);
int main()
{
    int n1;
    cout << "enter the number 1: ";
    cin >> n1;
    cout << armstone(n1);
    return 0;
}
int armstone(int a)
{
    int temp, rem, sum = 0;
    temp = a;
    while (a != 0)
    {
        rem = a % 10;
        sum = sum + rem * rem * rem;
        a = a / 10;
    }
    if (temp == sum)
    {
        cout << "Armstone"<<endl;
    }
    else
        cout << "not a armstone number";
}