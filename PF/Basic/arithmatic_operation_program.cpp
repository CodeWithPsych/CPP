#include <iostream>
using namespace std;
int main()
{
    int a, b, add, mul, sub, mod, div;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout<<endl;
    add = a + b;
    mul = a * b;
    sub = a - b;
    mod = a % b;
    div = a / b;
    cout <<"value: "<<add<<endl;
    cout <<"value: "<<mul<<endl;
    cout <<"value: "<<sub<<endl;
    cout <<"value: "<<mod<<endl;
    cout <<"value: "<<div<<endl;
    return 0;
}