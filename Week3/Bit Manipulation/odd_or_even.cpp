#include <iostream>
using namespace std;

// Finding Odd or Even
void OddOrEven (int num) {
    if(num & 1) {
        cout << "odd\n";
    } else {
        cout << "even\n";
    }
}

int main () {
    OddOrEven (5);
    OddOrEven (8);

    return 0;
}
