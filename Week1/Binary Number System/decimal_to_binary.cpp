#include <iostream>
using namespace std;

//Convert Decimal to Binary
void decToBin (int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 1;

    while (n > 0) {
        int rem = n % 2;
        binNum += rem * pow;
        pow = pow * 10;
        n = n/2;
    }

    cout <<"Binary value of " << decNum << " = " << binNum << endl;
}

int main () {
    decToBin (15);
    return 0;
}
