#include <iostream>
#include <vector>
using namespace std;

// Vectors Basics
int main() {
    vector<int> vec1(10, -1); // vector of size 10, all initialized to -1
    cout << "Vector Size: " << vec1.size() << endl;

    for (int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }

    cout << endl;
    return 0;
}
