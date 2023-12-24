#include <iostream>
using namespace std;

class base
{
    int id;
    int price;

public:
    void set(int a, int b)
    {
        id = a;
        price = b;
    }
    void display()
    {
        cout << "The id of item is " << id << endl;
        cout << "The price of item is " << price << endl;
    }
};

int main()
{
    int size = 1;
    base *ptr = new base;
    base *tem = ptr;
    int a, b, i;
    for (i = 0; i <= size; i++)
    {
        cout << "Enter the id of item " << i + 1 << " is: ";
        cin >> a;
        cout << "Enter the price of item " << i + 1 << " is: ";
        cin >> b;
        ptr->set(a, b);
        ptr++;
    }
    for (i = 0; i <= size; i++)
    {
        cout << "---- Item " << i + 1 <<" ---- "<< endl;
        tem->display();
        tem++;
    }
    return 0;
}
