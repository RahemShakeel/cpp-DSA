#include <iostream>
using namespace std;

// Set ith Bit
int setIthBit (int num, int i) {
    int bitMask = 1 << i;
    return (num | bitMask);
}

int main () {
    cout << setIthBit (6, 3) << endl;
    cout << setIthBit (7, 5) << endl;
    return 0;
}
