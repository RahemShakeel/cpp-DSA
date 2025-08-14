#include <iostream>
#include <limits.h>
using namespace std;

//Max Subarray Sum (Slightly Optimized)
void maxsubarraysum2 (int *arr, int n) {
    int maxsum = INT_MIN; 
    for (int start = 0; start < n; start++) {
          int currsum = 0;
        for (int end = start; end < n; end++) {
            currsum += arr[end];
            maxsum = max(maxsum, currsum);
        }
    }
    cout << "Maximum Subarray Sum = " << maxsum << endl;
}

int main () {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(n);

    maxsubarraysum2 (arr, n);

    return 0;
}
