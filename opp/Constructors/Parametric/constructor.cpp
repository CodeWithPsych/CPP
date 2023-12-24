#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "I am base 1 construtor" << endl;
    }
    void print1()
    {
        cout << "Base class one: " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int j)
    {
        data2 = j;
        cout << "I am base class two costructor" << endl;
    }
    void print2()
    {
        cout << "Base class two: " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int d1;
    int d2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        d1 = c;
        d2 = d;
        cout << "I am derived class constructor" << endl;
    }
    void print3()
    {
        print1();
        print2();
        cout << "D1: " << d1 << endl;
        cout << "D2: " << d2 << endl;
    }
};
int main()
{
    derived o(1, 2, 3, 4);
    o.print3();
    return 0;
}