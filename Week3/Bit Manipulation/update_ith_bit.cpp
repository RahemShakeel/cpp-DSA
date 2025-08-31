#include <iostream>
using namespace std;

// Update ith Bit
// WAF to update the ith bit in a number according to given value (0 or 1)
void updateIthBit (int num, int i, int val) {
    num = num & ~(1 << i); // clear ith bit
    num = num | (val << i);

    cout << num << endl;
}

int main () {
    updateIthBit(7, 2, 0);
    updateIthBit(7, 3, 1);

    return 0;
}
