#include <iostream>
using namespace std;
class Nesting_Of_Function
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
    void compliment_display(void);
};

void Nesting_Of_Function::read(void)
{
    cout << "Enter a binary number: ";
    cin>>s;
}
void Nesting_Of_Function::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Error! Incorrect Binary Formate" << endl;
            exit(0);
        }
    }
}
void Nesting_Of_Function ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Nesting_Of_Function::compliment_display(void)
{
    cout << "Displaying First Compliment: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
void Nesting_Of_Function::display(void)
{
    cout << "Displaying your Binary Number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    Nesting_Of_Function b;
    b.read();
    b.display();
    b.ones_compliment();
    b.compliment_display();
    return 0;
}