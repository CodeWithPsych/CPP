#include<iostream>
#include<fstream>
using namespace std;

int main() {
    {
  
        ofstream outfile("newfile.txt");
        if (outfile.is_open()) {
            cout << "File open for writing" << endl;
            outfile << "Hello, this is written to the file!" << endl;
            outfile.close();
        } else {
            cout << "Failed to open the file for writing" << endl;
            return 1;
        }
    }

    {
        ifstream infile("newfile.txt");
        if (infile.is_open()) {
            cout << "File open for reading" << endl;
            string content;
            while (infile >> content) {
                cout << content << " ";
            }
            infile.close();
        } else {
            cout << "Failed to open the file for reading" << endl;
            return 1;
        }
    }

    return 0;
}
