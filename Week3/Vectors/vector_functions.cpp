#include <iostream>
#include <vector>
using namespace std;

// Vector Functions
int main() {
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "Vector elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    vec.pop_back();

    cout << "After pop_back, elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
