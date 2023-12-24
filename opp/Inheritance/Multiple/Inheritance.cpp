#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
public:
    void print()
    {
        cout << "The simple arithmatic operations answers are: " << endl;
    }
    void print2()
    {
        cout << "The scientific operations answers are: " << endl;
    }
};
class simple : public calculator
{
protected:
    int a, b;

public:
    void set_val(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void simple_dispaly()
    {
        cout << "a + b = " << a + b << endl
             << "a - b = " << a - b << endl
             << "a * b = " << a * b << endl
             << "a / b = " << a / b << endl;
    }
};
class scientific_opr : public calculator
{
protected:
    int a, b;

public:
    void set_val2(int n1)
    {
        a = n1;
    }
    void sci_dispaly()
    {
        cout << "cos = " << cos(a) << endl
             << "sin = " << sin(a) << endl
             << "tan = " << tan(a) << endl
             << "log = " << log(a) << endl;
    }
};
class result : public scientific_opr, public simple
{
public:
    int n;
    void display_result()
    {
        cout << "What you want to perform scientific or simple operation?" << endl;
    again:
        cout << "press 1 for simple" << endl
             << "press 2 for scientific" << endl;
        cin >> n;
        if (n == 1)
        {
            int a;
            int b;
            cout << "Enter the first value: ";
            cin >> a;
            cout << "Enter the second value: ";
            cin >> b;
            set_val(a, b);
            simple_dispaly();
        }
        else if (n == 2)
        {
            int a;
            cout << "Enter the value: ";
            cin >> a;
            set_val2(a);
            sci_dispaly();
        }
        else
        {
            cout << "Invalid input try again" << endl;
            goto again;
        }
    }
};

int main()
{
    result r;
    r.display_result();
    return 0;
}