#include<iostream>
using namespace std;

//class
class student{
	public:
//		data members
		char name[50];
		int reg_n;
		int m1;
		int m2;
		int m3;
		int n;
//		functions	
		int read(){
			cout<<"Enter the value:";
			cin>>n;
			for(int i=1; i<=n; i++){
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the registration no:";
			cin>>reg_n;
			cout<<"Enter the first subject marks:";
			cin>>m1;
			cout<<"Enter the second subject marks:";
			cin>>m2;
			cout<<"Enter the third subject marks:";
			cin>>m3;
			int average = cal_avg();
			cout<<"The average is : "<<average<<endl;
			}
		}	
		 int cal_avg(){
		 	return (m1+m2+m3)/3;
		 }
		 
};
int main(){
	student data;
	data.read();
//	data.output();
	return 0;
}