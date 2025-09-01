# Polymorphism in C++

**Polymorphism** means *"many forms"* and is a key concept in Object-Oriented Programming (OOP).  
It allows the same function, operator, or method name to perform different tasks depending on the context.

Polymorphism is broadly divided into two categories:

---

## Types of Polymorphism

### 1. Compile-Time Polymorphism
- Also called **Static Binding** or **Early Binding**.  
- The function to be called is determined at **compile time**.  
- Achieved using:
  - **Function Overloading** – Same function name with different parameter lists.  
  - **Operator Overloading** – Redefining operators (`+`, `-`, `*`, etc.) for user-defined types.

---

### 2. Run-Time Polymorphism
- Also called **Dynamic Binding** or **Late Binding**.  
- The function to be executed is determined at **runtime**.  
- Achieved using:
  - **Function Overriding** – Redefining a base class method in a derived class.  
  - **Virtual Functions** – Allows base class pointers/references to call derived class methods dynamically.

---

## 🎯 Purpose of Polymorphism
- Increases **code flexibility and reusability**.  
- Supports **extensibility** without modifying existing code.  
- Makes programs more **dynamic and modular**.  
- Helps achieve **abstraction** and **encapsulation**.  
