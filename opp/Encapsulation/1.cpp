#include<iostream>
using namespace std;

class data{
    private:
    int length;
    int height;
    int width;
    int radius;

    public:
    double initial_data(int a, int b, int c, float d){
        length=a;
        height=b;
        width=c;
        radius=d;
    }

    int area_of_rectangle(){
        return length*width;
    }

    int volume_of_rectangle(){
        return length*width*height;
    }

    float area_of_circle(){
        return 3.14*radius*radius;
    }

    float volume_of_circle(){
        return 4.19*radius*radius*radius;
    }
};

int main(){
    data d1;
    d1.initial_data(5,5,5,10);
    cout<<"the area of rectangle is: "<<d1.area_of_rectangle()<<endl;
    cout<<"the volume of rectangle is: "<<d1.volume_of_rectangle()<<endl;
    cout<<"the area of rectangle is: "<<d1.area_of_circle()<<endl;
    cout<<"the volume of rectangle is: "<<d1.volume_of_circle()<<endl;

    return 0;
}