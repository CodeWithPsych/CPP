//the maximum function is a template function that takes two parmeters of same 
//datatype and return the maximum values among them this function can be used with integer, 
//double and character inside the function ternary operator to determine and return the maximum value in main function 
//demonstrate using the maximum function with different datatypes showcase its ability to determine work with various datatypes
#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int maxInt = maximum(10, 20);
    cout << "Maximum of 10 and 20 (int): " << maxInt << endl;

    double maxDouble = maximum(3.14, 2.718);
    cout << "Maximum of 3.14 and 2.718 (double): " << maxDouble << endl;

    char maxChar = maximum('a', 'Z');
    cout << "Maximum of 'a' and 'Z' (char): " << maxChar << endl;

    return 0;
}
