#include <iostream>
using namespace std;
int main()
{
    int n1, n2, lcm, hcf;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    for (int i = 1; i <= n1 / 2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf=i;
        }
 
    }
    lcm = n1 * n2 / hcf;
    cout<<"LCM = "<<lcm<<endl;
    cout<<"HCF = "<<hcf;
    return 0;
}