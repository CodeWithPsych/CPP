#include<iostream>
using namespace std;
class room{
	public:
	 room(){
	 	int length=12;
		int width=13;
		int height=14;
	 	cout<<"Area = "<<length*width<<endl;
	 	cout<<"volume = "<<length*width*height<<endl;
	 }
};
int main(){
	room r1;
	return 0;
}