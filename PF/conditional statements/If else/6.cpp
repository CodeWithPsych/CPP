// Write a program which prints the numbers from 1 to 100. But,
// multiples of 3 should be replaced with "Zoo",
// multiples of 5 should be replaced with "Zz"
// and multiples of both 3 and 5 should be replaced with "ZzZoo"?.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Please Enter the range of numbers : ";
    cin >> num;
        if ((num % (3 * 5)) == 0)
        {
            cout << "\n ZzZoo";
        }
        else if ((num % 5) == 0)
        {
            cout << "\n Zz";
        }
        else if ((num % 3) == 0)
        {
            cout << "\n Zoo";
        }
        else
        {
            cout << "try again";
        }
    return 0;
}