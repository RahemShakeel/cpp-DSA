#include <iostream>
using namespace std;

//FACTORIAL OF A NUM
int main () {
    int n;

    do {
        cout << "Enter a number to find its factorial: " << endl;
        cin >> n;
        if (n<0) {
            cout << "Enter a valid number" << endl;
        }
    } while (n<0);
    
    int fact = 1;
    for (int i = 1; i<=n; i++) {
        fact = fact * i;
    }

    cout << "The factorial is " << fact << endl;
    return 0;
}
