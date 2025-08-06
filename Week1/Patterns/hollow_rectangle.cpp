#include <iostream>
using namespace std;

//Hollow Rectangle Pattern
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        cout << "*"; //First
        for (int j=1; j<=n-1; j++) {
            if (i==1 || i==n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "*" <<endl;
    }
    return 0;
}
