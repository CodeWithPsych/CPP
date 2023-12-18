#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> num{
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    for (const auto& row : num) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}

