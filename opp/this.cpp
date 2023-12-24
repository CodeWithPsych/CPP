#include <iostream>
using namespace std;
class base
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void display(){
        cout<<"The value is "<<a<<endl;
    }
};
int main()
{
    base o;
    o.setData(1111);
    o.display();
    return 0;
}