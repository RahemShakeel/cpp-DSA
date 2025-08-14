# Basic Sorting Algorithms

This folder contains C++ implementations of common sorting algorithms, ranging from fundamental approaches to the use of the built-in `sort` function in the Standard Template Library (STL).

### 1. `bubble_sort.cpp`
- Implements the **Bubble Sort** algorithm.
- Compares adjacent elements and swaps them if they are in the wrong order.
- Time Complexity: **O(n²)** in worst and average cases; **O(n)** in best case (already sorted array).

---

### 2. `selection_sort.cpp`
- Implements the **Selection Sort** algorithm.
- Repeatedly finds the minimum element from the unsorted part and moves it to the sorted part.
- Time Complexity: **O(n²)** for all cases.

---

### 3. `insertion_sort.cpp`
- Implements the **Insertion Sort** algorithm.
- Builds the sorted array one item at a time by inserting elements into their correct position.
- Time Complexity: **O(n²)** in worst and average cases; **O(n)** for nearly sorted arrays.

---

### 4. `counting_sort.cpp`
- Implements the **Counting Sort** algorithm.
- Works for integer arrays with a known range of values.
- Time Complexity: **O(n + k)**, where *k* is the range of input values.
- **Note:** Not a comparison-based sort; stable when implemented carefully.

---

### 5. `inbuilt_sort.cpp`
- Demonstrates usage of the C++ STL **`sort()`** function.
- Default: sorts in ascending order.
- Can pass a comparator (e.g., `greater<int>()`) for descending order.
- Time Complexity: **O(n log n)**.
