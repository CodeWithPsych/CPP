#include<iostream>
using namespace std;

//class
class area{
	public:
//		data members
		int n1;
		int n2;
		int n3;
		int n4;
		
	//		functions	
		int read(){
			cout<<"Enter the first value:";
			cin>>n1;
			cout<<"Enter the second value:";
			cin>>n2;
			cout<<"Enter the first value:";
			cin>>n3;
			cout<<"Enter the second value:";
			cin>>n4;
		}	

		 int cal_sum(){
		 	cout<<"The first answer is:"<<n1+n2<<endl;
		 	cout<<"The second answer is:"<<n3+n4;
		 }
		 
};
int main(){
	area v1;
	v1.read();
	int result=v1.cal_sum();
	return 0;
}