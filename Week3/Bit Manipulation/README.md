# Bit Manipulation

This module introduces **bit-level operations in C++**, a powerful tool for solving problems efficiently.  
Bit manipulation is widely used in optimization, cryptography, graphics, and competitive programming.

---

## Topics Covered

### 1. Odd or Even
- Use the **`&` (bitwise AND)** operator with `1` to check the least significant bit.
- If result = `1` → Odd, else Even.

---

### 2. Get ith Bit
- Extract the value of the **i-th bit** using a bitmask `1 << i`.

---

### 3. Set ith Bit
- Set a bit at position `i` to `1` using `num | (1 << i)`.

---

### 4. Clear ith Bit
- Clear a bit (make it `0`) at position `i` using `num & ~(1 << i)`.

---

### 5. Check Power of 2
- A number is a power of 2 if it has **only one set bit**.
- Condition: `num & (num-1) == 0`.

---

### 6. Update ith Bit
- First clear the bit, then set it to given value `val`.

---

### 7. Clear Last i Bits
- Remove the last `i` bits using `(~0) << i`.

---

### 8. Count Set Bits
- Count number of `1`s in binary representation.
- Commonly used in problems involving subsets and masks.

---

### 9. Fast Exponentiation
- Compute `x^n` in **O(log n)** using bit operations.
- Multiply only when the current bit of `n` is `1`.

---

## Key Takeaways
- Bitwise operations are faster and more memory-efficient.
- Crucial in solving optimization problems and competitive programming.

---
