# Copy Constructors in C++

This section covers different types of copy constructors:

## 1. Basic Copy Constructor
- Uses the compiler-provided default copy constructor.
- Simply copies data members from one object to another.

File: `basic_copy.cpp`

---

## 2. Custom Copy Constructor
- User-defined copy constructor to explicitly handle how copying should occur.
- Useful when custom behavior or logs are needed.

File: `custom_copy.cpp`

---

## 3. Shallow Copy
- Copies the pointer values, not the data they point to.
- Both objects share the same memory → changing one affects the other.

File: `shallow_copy.cpp`

---

## 4. Deep Copy
- Creates a completely new copy of dynamically allocated memory.
- Ensures that objects are independent of each other.

File: `deep_copy.cpp`

---

## Key Takeaway
- **Shallow Copy** = memory sharing (dangerous in dynamic allocation).
- **Deep Copy** = independent copies (safe practice in OOP).
