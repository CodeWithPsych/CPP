#include<iostream>
using namespace std;
int sum(int n);
int main(){
    int n1;
    cout << "enter the number 1: ";
    cin >> n1;
    cout << sum(n1);
    return 0;
}
int sum(int n){
    int rem,temp,sum=0;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}