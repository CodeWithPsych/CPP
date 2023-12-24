#include <iostream>
using namespace std;

class values;

class calculate
{
public:
    int add(const values&);  
};

class values
{
private:
    int a;
    int b;
    friend class calculate;

public:
    void sum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    int getA() const { return a; }
    int getB() const { return b; }
};

int calculate::add(const values& v)
{
    return (v.a + v.b);
}

int main()
{
    values o1, o2;
    o1.sum(2, 3);
    o2.sum(4, 5);

    calculate c;
    int result = c.add(o1);
    cout << "Sum: " << result << endl;

    int result2 = c.add(o2);
    cout << "Sum: " << result2 << endl;

    return 0;
}
