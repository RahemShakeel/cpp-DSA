#include <iostream>
using namespace std;

//Input and Output
int main() {
    int arr [3][4];
    int n = 3;
    int m = 4;

    // For Input
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
        }
    }

    // For Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
