# Lab 02 – DMA and Classes in C++

## Problem Statement

**Part 1**  
Write a **menu-driven C++ program** to check whether a number is:
- Palindrome
- Armstrong Number
- Perfect Number

Use **Dynamic Memory Allocation (DMA)** only. Avoid normal variable or array declarations. Follow proper function design and coding best practices.

**Part 2**  
Write a **menu-driven C++ program** using **classes** to calculate and display the area of:
- Square
- Cube
- Rectangle
- Cuboid

Create an appropriate class with data members and member functions. Use proper boundary checks and coding standards.

---

## File Structure

| File Name     | Description                                                              |
|---------------|--------------------------------------------------------------------------|
| `pointer.cpp` | Uses DMA to check Palindrome, Armstrong, and Perfect numbers             |
| `class.cpp`   | Uses class and object concepts to calculate areas of 2D/3D shapes        |

---

## How to Compile and Run

Navigate to the directory where your files are stored. Then:

### ➤ Compile and run the DMA-based program:
```bash
g++ -o pointer pointer.cpp
./pointer
```

### ➤ Compile and run the class-based program:
```bash
g++ -o class class.cpp
./class
```

---

## Features

- **DMA Program (`pointer.cpp`)**
  - Fully uses `malloc` for memory allocation
  - Checks for:
    - Palindrome Number
    - Armstrong Number
    - Perfect Number

- **Class Program (`class.cpp`)**
  - Menu-driven interface
  - Calculates area for:
    - Square
    - Cube
    - Rectangle
    - Cuboid
  - Uses appropriate encapsulation and class design

---

## Best Practices Followed

- No global variables
- Proper function segregation
- Input validation and clean prompts
- Coding standards: indentation, naming, clarity

---

## Sample Output

```
Menu:
1. Palindrome Number
2. Armstrong Number
3. Perfect Number
4. Exit

Enter your choice: 2
Enter a number:
153
The number is Armstrong Number.
```

```
Menu:
1. Square
2. Cube
3. Rectangle
4. Cuboid
5. Exit

Enter your choice: 4
Enter the length:
3
Enter the breadth:
2
Enter the height:
4
The area of the cuboid is 26.00
```
---
