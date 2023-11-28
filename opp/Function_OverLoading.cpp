// function over loading
#include <iostream>

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    MathOperations *math = new MathOperations();

   int  sum1=math->add(5, 3);        
   double  sum2=math->add(2.5, 3.7);   
   int  sum3=math->add(2, 3, 4);

    std::cout << "Sum 1: " << sum1 << std::endl;
    std::cout << "Sum 2: " << sum2 << std::endl;
    std::cout << "Sum 3: " << sum3 << std::endl;
    
    delete math;        // it delete dynamic allocated memory
    return 0;
}
