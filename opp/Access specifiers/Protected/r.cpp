#include <iostream>
using namespace std;
class base
{
protected:
    int area;

public:
    base(int value) : area(value) {}

    virtual int cal(int length)
    {
        area = length * length;
        return area;
    }
};
class derived : public base
{
public:
    derived(int value) : base(value) {}
    void data(int newvalue)
    {
        area = newvalue;
        cal(area);
    }
    void newdata()
    {
        cal(area);
    }
};
int main()
{
    derived d1(23);

    d1.data(99);
    d1.newdata();
    cout << "Area: " << d1.cal(0) << endl;
    return 0;
}