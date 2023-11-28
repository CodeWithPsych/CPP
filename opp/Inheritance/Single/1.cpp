#include <iostream>
#include <string>
using namespace std;
class student{
	public:
		int id;
//		char std_name[50];
        string std_name;
		
		void set_data(){
		cout<<"Enter your sap ID: ";
		cin>>id;
		cout<<"Enter your Name: ";
		cin>>std_name;
		}
		void display_data(){
			cout<<"Your SAP ID is: "<<id<<endl<<"Your Name: "<<std_name<<endl;
		}
};
class fee_info: public student{
	public:
//		char course[100];
        string course;
		int fee;
		
		void set_more_data(){
		student::set_data();
		cout<<"Enter your course name: ";
		cin>>course;
		cout<<"Enter your course fee: ";
		cin>>fee;
		}	
		
		void display_more_data(){
		student::display_data();
		cout<<"Your course name is: "<<course<<endl<<"Your course fee: "<<fee<<endl;
		}
};
int main(){
	fee_info s1;
	s1.set_more_data();
	s1.display_more_data();
	return 0;
}