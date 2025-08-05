#include <iostream>
#include  <cmath>
using namespace std;

//Print Prime numbers from 2 to N
// int main () {
//     int n;
//     cout << "Enter a number: ";
//     cin>>n;

//     for (int i=2; i<=n; i++) {
//         int current = i; //to check for the current number
//         bool isPrime = true;
//         for (int j=2; j*j<=i; j++) {
//             if (current % j == 0) {
//                 isPrime = false;
//             }
//         }

//         if (isPrime = true)
//         cout<<current<<" ";
//     }
//     cout << endl;

//     return 0;
// }

//Better approach
int main () {
    int n;
    cout << "Enter a number: ";
    cin>>n;

    for (int i=2; i<=n; i++) {
        int current = i; //to check for the current number
        bool isPrime = true;
        for (int j=2; j<=sqrt(i); j++) {
            if (current % j == 0) {
                isPrime = false;
            }
        }

        if (isPrime == true)
        cout<< current <<" ";
    }
    
    cout << endl;

    return 0;
}
