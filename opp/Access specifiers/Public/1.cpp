#include<iostream>
using namespace std;

//class
class area{
	public:
//		data members
		int length;
		int width;
		int height;
		
//		functions
		 int cal_area(){
		 	return length*width;
		 }
		 int cal_vol(){
		 	return length*width*height;
		 }
};
int main(){
//	object
	area a1,a2,a3;
	
//	object a1 data
	a1.length=5;
	a1.width=10;
	a1.height=45;
	
//	object a2 data	
	a2.length=5;
	a2.width=10;
	a2.height=45;
	
//	object a3 data
	a3.length=5;
	a3.width=10;
	a3.height=45;

//outputs
	cout<<"The area of the room is: "<<a1.cal_area()<<endl;
	cout<<"The volume of the room is: "<<a1.cal_vol()<<endl;
	cout<<"The area of the room is: "<<a2.cal_area()<<endl;
	cout<<"The volume of the room is: "<<a2.cal_vol()<<endl;
	cout<<"The area of the room is: "<<a3.cal_area()<<endl;
	cout<<"The volume of the room is: "<<a3.cal_vol();
	
	return 0;
}