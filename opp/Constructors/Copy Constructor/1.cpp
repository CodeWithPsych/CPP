#include <iostream>
using namespace std;

class wall
{
public:
    int a = 10;

public:
    wall(){}
    wall(wall &obj)
    {
        a = obj.a;
        cout<<obj.a<<endl;
    }
};

int main()
{
    wall w1;
    wall w2 = w1;
    return 0;
}