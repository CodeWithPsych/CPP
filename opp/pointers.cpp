#include <iostream>
using namespace std;

class base
{
public:
    int var1;
    void display()
    {
        cout << "Displaying Bass Class Variable value:" << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2;
    void display()
    {
        cout << "Displaying derived class variable value:" << var2 << endl;
        cout << "Displaying Bass Class Variable value:" << var1 << endl;
    }
};
int main()
{
    base *base_pointer;
    base base_obj;
    derived derived_obj;
    base_pointer = &derived_obj;

    base_pointer->var1 = 34;
    base_pointer->display();

    // base_pointer->var2=134;     ---> (error)

    derived *derived_pointer;
    derived_pointer = &derived_obj;

    derived_pointer->var2 = 98;
    derived_pointer->var1 = 44;
    derived_pointer->display();

    return 0;
}