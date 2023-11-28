// function over riding 
#include <iostream>

class Shape
{
public:
    virtual void draw()
    {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main()
{
    Shape *shapePtr;

    Circle circle;
    Rectangle rectangle;

    shapePtr = &circle;
    shapePtr->draw(); // Calls the draw method of Circle

    shapePtr = &rectangle;
    shapePtr->draw(); // Calls the draw method of Rectangle

    return 0;
}
