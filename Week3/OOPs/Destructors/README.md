# Destructors in C++

A **destructor** is a special member function in C++ that is automatically called when an object goes out of scope or is explicitly deleted.  
It is mainly used to **free resources** such as dynamically allocated memory.

---

## Key Points
- Destructor has the same name as the class, but is prefixed with a `~`.
- It **does not take arguments** and **does not return values**.
- It is automatically invoked when an object is destroyed.
- Useful for releasing **dynamic memory**, closing files, or cleaning up resources.
