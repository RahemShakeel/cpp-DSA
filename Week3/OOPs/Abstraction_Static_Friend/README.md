# Abstraction, Static, and Friend in C++

This module covers important concepts in Object-Oriented Programming (OOP):

---

## Abstraction
- **Abstraction** is the process of hiding implementation details and only showing essential features.  
- Achieved using:
  - **Abstract Classes**
  - **Pure Virtual Functions**
- Purpose: Provide a blueprint for derived classes while ensuring a consistent interface.

---

## Static Keyword
The `static` keyword has different meanings depending on its context:

1. **Static Variable in Function**  
   - Retains its value between function calls.
   - Useful for counters or memory across invocations.

2. **Static Data Members in Class**  
   - Shared by all objects of the class.
   - Exists independently of class instances.

3. **Static Objects**  
   - Persist for the entire program duration.
   - Constructors run once, and destructors run only at program end.

---

## Friend Class and Friend Function
- A **friend function** has access to private/protected members of a class.  
- A **friend class** allows another class full access to its private members.  
- Purpose: Used when tight coupling is required between classes, or for debugging/utility access.

---

## Purpose of These Concepts
- **Abstraction:** Achieve modularity and focus on "what" an object does, not "how".  
- **Static:** Manage shared state and lifetime of variables efficiently.  
- **Friend:** Allow controlled access when collaboration between classes is required.  
