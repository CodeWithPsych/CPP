// Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
// 1 - function of Mammals by the object of Mammal
// 2 - function of MarineAnimal by the object of MarineAnimal
// 3 - function of BlueWhale by the object of BlueWhale
// 4 - function of each of its parent by the object of BlueWhale

#include<iostream>
using namespace std;
class mammals{
	public:
		
		void Mammals(){
			cout<<"I am mammal"<<endl;
		}
};
class marineAnimals{
	public:
		void MarineAnimals(){
			cout<<"I am Marine Animal"<<endl;
		}
};
class blueWhale: public mammals, public marineAnimals{
	public:
		char name;
		void display_data(){
			cout<<"Enter the category: ";
			cin>>name;
			if(name=='m'){
				mammals::Mammals();
			}
			else if(name=='a'){
				marineAnimals::MarineAnimals();
			}
			else
			cout<<"I belong to both marine and mammal";
		}
};
int main(){
	blueWhale w1;
	w1.display_data();
	return 0;
}