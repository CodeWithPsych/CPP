//THE FUNCTION NAME SWAPVALUE IS A TEMPLATE THAT TAKE  TWO PARAMETERS OF TYPE 2 BY REFREANCE AND SWAP THEIR VALUES. 
//THIS FUNCTION CAN BE USED WITH INTEGER DOUBLE CHAR AND ANY OTHER DATATYPE  INSIDE A FUNCTION A TEMPORARY  VARIABLES IS USED TO
//SWAP THE VALUES FUNCTION WITH DIFFRENT DTATATYPES INTEGERS DOUBLE AND CHAR . AND DISPLAY THE VALUES BEFORE AND AFTER SWAPING THE 
//FUNCTION TO SHOW SUCCESSFUL SWAP FUNCTION VALUES OF EACH DATA TYPE
#include <iostream>
using namespace std;

template <typename T>
void swapValue(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intA = 5, intB = 10;
    cout << "Before swapping - Integer values: " << intA << ", " << intB << "\n";
    swapValue(intA, intB);
    cout << "After swapping - Integer values: " << intA << ", " << intB << "\n\n";

    double doubleA = 3.14, doubleB = 2.718;
    cout << "Before swapping - Double values: " << doubleA << ", " << doubleB << "\n";
    swapValue(doubleA, doubleB);
    cout << "After swapping - Double values: " << doubleA << ", " << doubleB << "\n\n";

    char charA = 'A', charB = 'B';
    cout << "Before swapping - Char values: " << charA << ", " << charB << "\n";
    swapValue(charA, charB);
    cout << "After swapping - Char values: " << charA << ", " << charB << "\n";

    return 0;
}

