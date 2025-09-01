# Week 3 – Vectors, Bit Manipulation, and OOPs

This week focuses on three important areas in C++ programming: **STL Vectors**, **Bit Manipulation**, and **Object-Oriented Programming (OOPs)**.  
Each of these topics builds essential skills for writing efficient, modular, and maintainable code.

---

## Vectors (STL)

### Overview
- Vectors are **dynamic arrays** provided by the C++ Standard Template Library (STL).
- They can resize automatically and provide many useful built-in functions.

### Key Points
- **Dynamic Sizing:** Unlike arrays, vectors can grow/shrink at runtime.
- **Access:** Elements can be accessed using `at()` or `[]`.
- **Common Functions:**
  - `push_back()` → Add element at the end
  - `pop_back()` → Remove last element
  - `size()` → Number of elements
  - `capacity()` → Current allocated memory
  - `clear()` → Remove all elements

### Purpose
Vectors are widely used in real-world applications where:
- Data size is not fixed.
- Efficient insertion and traversal are needed.
- Easy integration with STL algorithms is required.

---

## Bit Manipulation

### Overview
- Bit manipulation involves performing operations directly on **bits** of integers.
- It allows very fast and memory-efficient computations.

### Common Operators
- `&` (AND)
- `|` (OR)
- `^` (XOR)
- `~` (NOT)
- `<<` (Left Shift)
- `>>` (Right Shift)

### Use Cases
- Checking if a number is odd/even.
- Swapping numbers without extra space.
- Checking/setting/unsetting/toggling specific bits.
- Counting set bits (`__builtin_popcount`).
- Optimizations in algorithms like **subset generation** and **masking**.

### Purpose
- Crucial in **competitive programming**, **system programming**, **cryptography**, and **graphics**.
- Helps write optimized, low-level code.

---

## Object-Oriented Programming (OOPs)

### Overview
OOPs in C++ is a programming paradigm based on the concept of **objects** and **classes**.  
It allows modular, reusable, and scalable program design.

### Core Concepts
1. **Encapsulation** – Binding data and methods together.
2. **Abstraction** – Hiding implementation details and exposing only necessary features (using abstract classes & pure virtual functions).
3. **Inheritance** – Deriving new classes from existing ones.
   - Single Inheritance
   - Multiple Inheritance
   - Multilevel Inheritance
   - Hierarchical Inheritance
   - Hybrid Inheritance
4. **Polymorphism** – Ability to take many forms.
   - Compile-time (Function & Operator Overloading)
   - Run-time (Virtual Functions)

### Other Important Topics
- **Constructors & Destructors**
- **Static Keyword**  
  - Static variables (retain values across calls)  
  - Static class members (shared across objects)  
  - Static objects (exist till program ends)  
- **Friend Functions & Classes** – Allow external access to private members when needed.

### Purpose
- Provides **modularity, reusability, and maintainability**.  
- Forms the foundation for **large-scale software engineering**.  
- Mimics real-world entities to make problem-solving intuitive.

---

## Summary
- **Vectors** → Flexible containers for dynamic data storage.  
- **Bit Manipulation** → Efficient low-level optimization tool.  
- **OOPs** → Powerful paradigm for structured, modular, and reusable code design.  

Together, these topics strengthen both **problem-solving skills** and **software design abilities** in C++.  
