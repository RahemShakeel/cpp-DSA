#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int n) {
    int minVal = INT_MAX, maxVal = INT_MIN;

    // Find range
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;
    int *freq = new int[range](); // Initialize to 0

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i] - minVal]++;
    }

    // Place back into array
    int idx = 0;
    for (int i = 0; i < range; i++) {
        while (freq[i]--) {
            arr[idx++] = i + minVal;
        }
    }

    delete[] freq;
}

int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);
    cout << "Sorted Array: ";
    print(arr, n);

    return 0;
}
