#include <iostream>
using namespace std;

// Clear Last i Bits
// WAF to clear last i bits of a number
void clearIthBit (int num, int i) {
    int bitMask = (~0) << i;
    num = num & bitMask;

    cout << num << endl;
}

int main () {
    clearIthBit(15, 2);
    return 0;
}
