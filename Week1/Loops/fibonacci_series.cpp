#include <iostream>
using namespace std;

//First N Fibonnaci Numbers
int main () {
    int n;
    cout << "Ether a number: ";
    cin >> n;

    int first = 0, sec = 1;
    cout << first << " " << sec << " ";

    for (int i=2; i<n; i++) {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    return 0;
}
