#include <iostream>
#include <vector>
using namespace std;

// Vector Memory (Size vs Capacity)
int main() {
    vector<int> vec = {1, 2, 3, 4};

    cout << "Vector Size: " << vec.size() << endl;
    cout << "Vector Capacity: " << vec.capacity() << endl;

    vec.push_back(5);
    cout << "After push_back(5):" << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    vec.pop_back();
    cout << "After pop_back():" << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    return 0;
}
