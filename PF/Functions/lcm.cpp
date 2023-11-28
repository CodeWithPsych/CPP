#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    int lcm, hcf;
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    lcm = a * b / hcf;
    return lcm;
}

int main()
{
    int n1, n2;
    cout << "enter the number 1: ";
    cin >> n1;
    cout << "enter the number 2: ";
    cin >> n2;
    cout << "the lcm is: " << lcm(n1, n2);
    return 0;
}