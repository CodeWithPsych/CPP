#include <iostream>
using namespace std;
int main()
{
    char name[55], city[55], address[1000];
    int age;
    unsigned long int number;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your phone number: ";
    cin >> number;
    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your address: ";
    cin >> address;
    cout << endl;
    cout << "your name: " << name << endl;
    cout << "your age: " << age << endl;
    cout << "your phone number: " << number << endl;
    cout << "your city: " << city << endl;
    cout << "your address: " << address << endl;
    return 0;
}