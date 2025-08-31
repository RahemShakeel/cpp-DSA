#include <iostream>
using namespace std;

// Check for power of 2
bool isPowerOf2 (int num) {
    if (!(num & (num-1))) {
        return true; // which means it's a power of 2
    } else {
        return false;
    }
}

int main () {
    cout << isPowerOf2(4) << endl;
    cout << isPowerOf2(16) << endl;
    cout << isPowerOf2(13) << endl;
    cout << isPowerOf2(15) << endl;
    return 0;
}
