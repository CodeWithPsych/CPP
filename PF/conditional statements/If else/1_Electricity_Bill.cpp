#include<iostream>
using namespace std;
int main()
{
	int rate1, rate2, units, bill;
	rate1=5;
	rate2=10;
	cout<<"enter units consumed by cient:"<<endl;
	cin>>units;
	if(units<250)
	{
		bill=units*rate1;
		cout<<"totoal bill is"<<bill<<endl;
	}
	else
	{
		bill=units*rate2;
		cout<<"totoal bill is"<<bill<<endl;
	}
}