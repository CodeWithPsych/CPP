#include<iostream>
using namespace std;

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
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
//	object
	area a[n];
	
//	loop	
for (int i=1; i<=n; i++){
	cout<<"Enter the length "<<i<<":";
	cin>>a[i].length;
	cout<<"Enter the width "<<i<<":";
	cin>>a[i].width;
	cout<<"Enter the height "<<i<<":";
	cin>>a[i].height;
	cout<<"The area of the room is: "<<a[i].cal_area()<<endl;
	cout<<"The volume of the room is: "<<a[i].cal_vol()<<endl;
}
	
	return 0;
}
