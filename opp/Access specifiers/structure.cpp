#include <iostream>
#include <string>
using namespace std;
struct student
{
	int ID;
	char name[50];
	char degree[50];
	int AGE;
};

int main()
{
	student S1;

	cout << "ENTER STUDENT ID" << endl;
	cin >> S1.ID;
	cout << "ENTER STUDENT NAME" << endl;
	cin >> S1.name;
	cout << "ENTER STUDENT LAST NAME " << endl;
	cin >> S1.degree;
	cout << "ENTER STUDENT AGE" << endl;
	cin >> S1.AGE;

	cout << S1.ID << endl;
	cout << S1.name << endl;
	cout << S1.degree << endl;
	cout << S1.AGE << endl;

	return 0;
}
