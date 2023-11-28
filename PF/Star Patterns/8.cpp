#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=4; j>=0; j--){
            cout<<" ";
        }
        for(int k=1; k<=5; k++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}