#include<iostream>
using namespace std;
class room{
		int length;
		int width;
		int height;
	public:
	 room(int leng,int widt,int heig){
	 	length=leng;
	 	width=widt;
	 	height=heig;
	 }
	 int area(){
	 	return length*width;
	 }
	 int volume(){
	 	return length*width*height;
	 }
	 room(room &obj){
	     length=obj.length;
	     width=obj.width;
	     height=obj.height;
	 }
};
int main(){
	room r1(5,10,15);
	room r2=r1;
	room r3=r1;
	cout<<"Area = "<<r1.area()<<endl;
	cout<<"volume = "<<r1.volume()<<endl;
	cout<<"Area = "<<r2.area()<<endl;
	cout<<"volume = "<<r2.volume()<<endl;
	cout<<"Area = "<<r3.area()<<endl;
	cout<<"volume = "<<r3.volume()<<endl;
	return 0;
}