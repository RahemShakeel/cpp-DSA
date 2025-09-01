# Inheritance in C++

**Inheritance** is a fundamental concept of Object-Oriented Programming (OOP) that allows one class (child/derived) to acquire properties and methods from another class (parent/base).  
This makes code **reusable, extensible, and easier to manage**.

---

## Types of Inheritance

### 1. Single Inheritance
- A derived class inherits from a single base class.  
- Useful for extending a class with additional features.

---

### 2. Multi-Level Inheritance
- A class inherits from a derived class, forming a **chain of inheritance**.  
- Models real-world hierarchical relationships.

---

### 3. Multiple Inheritance
- A class inherits from **more than one base class**.  
- Useful when an object needs to combine functionality from multiple sources.  
- Can cause the **Diamond Problem**, which is solved using *virtual inheritance*.

---

### 4. Hierarchical Inheritance
- Multiple classes inherit from the **same base class**.  
- Useful when many objects share common properties but have their own unique behaviors.

---

## Purpose of Inheritance
- Promotes **code reusability**.  
- Makes programs easier to **maintain and extend**.  
- Helps model **real-world relationships** in code.  
- Supports **polymorphism** (runtime flexibility in method behavior).  
