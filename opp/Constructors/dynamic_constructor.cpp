#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R); 
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R) / 100;t
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd;
    int p, y;
    float r;
    int R;
    cout << "Enter The Values Of p, y and r " << endl;
    cin >> p >> y >> r;
    bd = BankDeposit(p, y, r);
    bd.show();

    cout << "Enter The Values Of p, y and R " << endl;
    cin >> p >> y >> R;
    bd = BankDeposit(p, y, R);
    bd.show();

    return 0;
}
