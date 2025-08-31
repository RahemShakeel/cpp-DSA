#include <iostream>
using namespace std;

// Clear ith Bit
int clearIthBit (int num, int i) {
    int bitMask = ~(1 << i);
    return (num & bitMask);
}

int main () {
    cout << clearIthBit (6, 1) << endl;
    cout << clearIthBit (7, 5) << endl;
    return 0;
}
