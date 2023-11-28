#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter any number"<<endl;
cin>>number;
if(number<0)
{
cout<<"Number is negative"<<endl;
}
else if(number>0)
{
cout<<"Number is positive"<<endl;
}
else if(number==0)
{
cout<<"0 is not positive and not negative"<<endl;
}
else
{
cout<<"Invalid Number"<<endl;
}
return 0;
}