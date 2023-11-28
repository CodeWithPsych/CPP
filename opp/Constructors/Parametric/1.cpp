#include <iostream>
using namespace std;
class wall
{
public:
    int x, y;

public:
    wall() {}
    wall(int a, int b)
    {
        x = a;
        y = b;
        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{
    wall w1(5, 4);
    return 0;
}