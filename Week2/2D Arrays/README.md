# 2D Arrays in C++

This folder contains examples and problems related to **2D Arrays** in C++.  
A 2D array can be visualized as a matrix of rows and columns, making it useful for grid-based problems, image processing, and mathematical computations.

---

## Topics Covered

1. **Input & Output of 2D Arrays**  
   - Taking input for a matrix using nested loops.  
   - Printing the matrix in row-wise format.  
   - 📄 File: `input_output.cpp`

2. **Spiral Matrix Traversal**  
   - Traversing the matrix in a spiral order.  
   - Useful in problems like printing elements layer by layer.  
   - 📄 File: `spiral_matrix.cpp`

3. **Diagonal Sum**  
   - Calculating the sum of primary and secondary diagonals of a square matrix.  
   - Optimized approach with O(n) complexity.  
   - 📄 File: `diagonal_sum.cpp`

4. **Staircase Search**  
   - Efficient searching in a sorted 2D array.  
   - Time Complexity: O(n + m).  
   - 📄 File: `staircase_search.cpp`

---

## Example Usage
```cpp
// Example from staircase_search.cpp
int matrix [4][4] = {
    {10, 20, 30, 40},
    {15, 25, 35, 45},
    {27, 29, 37, 48},
    {32, 33, 39, 50}
};

search(matrix, 4, 4, 33); // Output: found at cell (3,1)
