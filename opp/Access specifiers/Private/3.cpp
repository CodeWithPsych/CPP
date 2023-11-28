#include<iostream>
using namespace std;

//class
class area{
	public:
//		data members
		int n1;
		int n2;
	
//		functions
		 int cal_sum(){
		 	return n1+n2;
		
		 }
};
int main(){
//	object
	area a1,a2,a3;
	
//	object a1 data
    cout<<"Enter the first value:";
	cin>>a1.n1;
	cout<<"Enter the second value:";
	cin>>a1.n2;
	cout<<"The area of the room is: "<<a1.cal_sum()<<endl;
	
//	object a2 data
	cout<<"Enter the first value:";
	cin>>a2.n1;
	cout<<"Enter the second value:";
	cin>>a2.n2;
	cout<<"The area of the room is: "<<a2.cal_sum()<<endl;
	
//	object a3 data
	cout<<"Enter the first value:";
	cin>>a3.n1;
	cout<<"Enter the second value:";
	cin>>a3.n2;
	cout<<"The area of the room is: "<<a3.cal_sum()<<endl<<endl;

//outputs
	cout<<"The area of the room is: "<<a1.cal_sum()<<endl;
	cout<<"The area of the room is: "<<a2.cal_sum()<<endl;
	cout<<"The area of the room is: "<<a3.cal_sum()<<endl;
	
	return 0;
}