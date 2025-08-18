#include <iostream>
using namespace std;

//Diagonal Sum
int DiagonalSum (int mat [][4], int n) { // we didnt write m because matrix size is n=m
    int sum = 0;

    //T.C = O(n^2)
    // for (int i = 0; i < n; i++) { // Loop for rows
    //     for (int j = 0; j < n; j++) { //Loop for column
    //         if (i == j) {
    //             sum += mat[i][j];
    //         } else if (j == n-i-1) {
    //             sum += mat[i][j]; 
    //         }
    //     }
    // }

    
    //T.C = O(n)
    for (int i = 0; i < n; i++) {
        sum+= mat[i][i]; //pd
        if (i != n-i-1) {
            sum += mat[i][n-i-1];
        }
    }

    cout << "sum = " << sum << endl;
    return sum;
}


int main () {
    int matrix [4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};

    // int matrix2 [3][3] = {{1, 2, 3},
    //                      {4, 5, 6},
    //                      {7, 8, 9}};

    DiagonalSum (matrix, 4);

    return 0;
}
