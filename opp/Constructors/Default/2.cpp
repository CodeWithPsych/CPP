#include<iostream>
using namespace std;
class room{
	public:
		int length;
		int width;
		int height;
	 room(){
	 	cout<<"Length: ";
	 	cin>>length;
	 	cout<<"width: ";
	 	cin>>width;
	 	cout<<"height: ";
	 	cin>>height;
	 }
	 int area(){
	 	return length*width;
	 }
	 int volume(){
	 	return length*width*height;
	 }
};
int main(){
	room r1;
	cout<<"Area = "<<r1.area()<<endl;
	cout<<"volume = "<<r1.volume()<<endl;
	return 0;
}