#include <iostream>
using namespace std;

// Count Set Bits
int countSetBits (int num) {
    int count = 0;

    while(num > 0) {
        int LastDig = num & 1;
        count += LastDig;

        num = num >> 1;
    }

    cout << count << endl;
    return count;
}

int main () {
    countSetBits(10);
    return 0;
}
