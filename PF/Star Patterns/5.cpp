#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int a = j; a <= j; a++)
            {
                cout << a;
            }
        }
        cout << endl;
    }
    return 0;
}