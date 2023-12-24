#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void data(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex result(complex o1, complex o2);
    void displayData()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};
complex result(complex o1, complex o2)
{
    cout << "the result is " << (o1.a + o2.a) << " + " << (o1.b + o2.b) << "i" << endl;
}
int main()
{
    complex c1, c2;
    c1.data(12, 33);
    c2.data(2, 3);
    c1.displayData();
    c2.displayData();
    result(c1,c2);
    return 0;
}