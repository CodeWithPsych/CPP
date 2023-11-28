// We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.

#include <iostream>
#include <string>
using namespace std;
class physics{
	public:
		int p_marks;

		void physics_data(){
		cout<<"Enter your physics marks out of 100: ";
		cin>>p_marks;
		}
};
class math{
	public:
		int m_marks;

		void math_data(){
		cout<<"Enter your math marks out of 100: ";
		cin>>m_marks;
		}
};
class chemistry{
	public:
		int c_marks;

		void chemistry_data(){
		cout<<"Enter your chemistry marks out of 100: ";
		cin>>c_marks;
		}
};
class final: public physics, public math, public chemistry{
	public:
		int obt_marks;
		float percentage;
		int n;

		void set_total_marks(){
		cout<<"Enter total students: ";
		cin>>n;
		for (int i=0; i<=n; i++)
		physics_data();
		math_data();
		chemistry_data();
		obt_marks=p_marks+m_marks+c_marks;
		percentage=obt_marks/300;
		cout<<"You obtain "<<obt_marks<<"Out of 300 and your percentage is "<<percentage<<"%";
		}	
};
int main(){
	final s1;
	s1.set_total_marks();
	return 0;
}