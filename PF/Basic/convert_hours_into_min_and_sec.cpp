#include <iostream>
using namespace std;
int main()
{
    int n,min,sec;
    cout << "enter the hours: ";
    cin >> n;
    min=n*60;
    sec=min*60;
    cout<<"the answer is "<<min<<" minutes and "<<sec<<" seconds."<<endl;
    return 0;
}