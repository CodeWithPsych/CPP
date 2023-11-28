#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Please enter a number to find its length"<<endl;
cin>>num;
for(int i=0; i>=num; i++){
num=num/10;
cout<<"the length of the number is = "<<i<<endl;
}
return 0;
}