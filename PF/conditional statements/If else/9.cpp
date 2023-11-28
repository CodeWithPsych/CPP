// ASCII code Program in C++ (C Plus Plus)
#include <iostream>
using namespace std;
int main()
{
    char OurCharacterValue;

    cout << "Enter a OurCharacterValue =  ";
    cin >> OurCharacterValue;

    int OurASCIIValue = OurCharacterValue;
    cout << "The ASCII value  of " << OurCharacterValue << " is " << OurASCIIValue;

    if (OurASCIIValue >= 97 && OurASCIIValue <= 122)
    {
        cout << "\nYou have entered a small letter";
    }
    else if (OurASCIIValue >= 65 && OurASCIIValue <= 90)
    {
        cout << "\nYou have entered a capital letter";
    }

    else if (OurASCIIValue >= 0 && OurASCIIValue <= 47 || OurASCIIValue >= 54 && OurASCIIValue <= 64 || OurASCIIValue >= 91 && OurASCIIValue <= 96 || OurASCIIValue >= 123 && OurASCIIValue <= 127)
    {
        cout << "\nYou have entered a special CharacterValue";
    }
    else if (OurASCIIValue >= 47 && OurASCIIValue <= 57)
    {
        cout << "\nYou have entered a digit ";
    }
    return 0;
}