#include <iostream>
using namespace std;
int a = 0;
class number
{
public:
    // constructor
    number()
    {
        a++;
        cout << "Hye i am constructor " << a << endl;
    }

    // destructor
    ~number()
    {
        cout << "Hye i am destructor " << a << endl;
        a--;
    }
};
int main()
{
    cout << "main" << endl;
    number n1; // object
    {
        cout << "Block" << endl;
        number n2, n3; // objects
        cout << "block end" << endl;
    }
    cout << "end main" << endl;
    return 0;
}