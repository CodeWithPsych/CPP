#include <iostream>
using namespace std;
class base
{
    int a;

public:
    base &setData(int a)
    {
        this->a = a;
        return *this;
    }
    void display(){
        cout<<"The value is "<<a<<endl;
    }
};
int main()
{
    base o;
    o.setData(11).display();
    return 0;
}