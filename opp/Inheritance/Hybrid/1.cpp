#include<iostream>
using namespace std;
int w,x,y,z;
class student{
	protected:
		int roll_number;
	
	public:
	int set_rollnumber(int a){
		roll_number=a;
	}	
	void print_rollnumber(){
		cout<<"The roll number is: "<<roll_number<<endl;
	}
};
class test: virtual public student{
	protected:
		float math;
		float physic;
	public:
	int set_number(int a,int b){
		math=a;
		physic=b;
	}	
	void print_number(){
		cout<<"The physic marks is: "<<physic<<endl;
		cout<<"The math marks is: "<<math<<endl;
	}
};
class sport: public virtual student{
	protected: 
	float score;
	public:
		void set_score(int sc){
			score=sc;
		}
		void print_score(){
			cout<<"The sport score: "<<score<<endl;
		}
};
class result:public test,public sport{
	protected:
		float total;
		public:
			result(){
			cout<<"Enter Roll Number: ";
			cin>>w;
			cout<<"Enter Physics Number: ";
			cin>>x;
			cout<<"Enter Math Number: ";
			cin>>y;
			cout<<"Enter score: ";
			cin>>z;	
			}
			public:
	void display(){
		total=math+physic+score;
		print_rollnumber();
		print_number();
		print_score();
		cout<<"The total marks are: "<<total;
	}
};
int main(){
	result R1;
	R1.set_rollnumber(w);
	R1.set_number(x,y);
	R1.set_score(z);
	R1.display();
	return 0;
}