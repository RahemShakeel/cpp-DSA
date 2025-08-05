#include <iostream>
using namespace std;

// Armstrong Numbers
int main () {
    int n;
    int num;
    int lastdig;
    int cubesum = 0;

    do {
        cout << "Enter a 3 digit number to find if its an armstrong number or not: ";
        cin >> n;

        if (n<100 || n >= 1000) {
            cout <<"Enter a valid 3 digit number" << endl;
        }
    } while (n<100 || n >= 1000);

    num = n;
    while (num > 0) {
        lastdig = num % 10;
        cubesum += lastdig * lastdig * lastdig;
        num = num / 10;
    }

    if (n == cubesum) {
        cout << "This number is an Armstrong number" << endl;
    } else {
        cout << "This number is NOT an Armstrong number" << endl;
    }

    return 0;
} 
