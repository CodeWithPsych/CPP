#include<iostream>
using namespace std;
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
				int roll,phy,m,s;
			result(){
			cout<<"Enter roll Number: ";
			cin>>roll;
			cout<<"Enter physics marks: ";
			cin>>phy;
			cout<<"Enter Math marks: ";
			cin>>m;
			cout<<"Enter score: ";	
			cin>>s;		
			}
			int  value_roll(){
				return roll;
			}int  value_phy(){
				return phy;
			}int  value_m(){
				return m;
			}int  value_s(){
				return s;
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
	R1.set_rollnumber(R1.value_roll());
	R1.set_number(R1.value_phy(),R1.value_m());
	R1.set_score(R1.value_s());
	R1.display();
	return 0;
}