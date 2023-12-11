//cpp program: The pair is a template class that can hold pair of any datatypes it has methodsto set and get the value of pair 
//elements the main function demonstarte creating instance of pair for integer , double ,and string showcase how this template 
//class can work with difrent data types
#include <iostream>
#include <string>
using namespace std;	
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair() : first(), second() {}
    Pair(const T1& f, const T2& s) : first(f), second(s) {}
    void setFirst(const T1& f) {
        first = f;
    }
    void setSecond(const T2& s) {
        second = s;
    }
    T1 getFirst() const {
        return first;
    }
    T2 getSecond() const {
        return second;
    }
};
int main() {
    Pair<int, int> intPair(1, 2);
    cout << "Integer Pair: (" << intPair.getFirst() << ", " << intPair.getSecond() << ")\n";
    Pair<double, double> doublePair(3.14, 2.718);
    cout << "Double Pair: (" << doublePair.getFirst() << ", " << doublePair.getSecond() << ")\n";
    Pair<string, string> stringPair("Hello", "World");
    cout << "String Pair: (" << stringPair.getFirst() << ", " << stringPair.getSecond() << ")\n";
    
    return 0;
}

