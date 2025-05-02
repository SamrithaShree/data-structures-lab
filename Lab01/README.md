# Lab 01 – Sorting and Searching using C++

## Problem Statement

**Part 1**  
Write a C++ program to implement the following sorting algorithms:
- Bubble Sort
- Selection Sort
- Insertion Sort

These functions are to be written in a separate file and later reused.

**Part 2**  
Create a C++ program that provides a menu-driven interface for:
- Sorting (Bubble, Selection, Insertion)
- Searching (Linear, Binary)

Use a header file to declare all functions and keep the code modular.

---

## File Structure

| File Name     | Description                                                |
|---------------|------------------------------------------------------------|
| `sort.cpp`    | Contains sorting algorithm function definitions            |
| `sort.h`      | Header file declaring sorting and search function prototypes |
| `search.cpp`  | Combined menu-driven program for both sorting and searching|

---

## How to Compile and Run

### ➤ Run the main program:

```bash
g++ -o lab01 search.cpp sort.cpp
./lab01
```

This compiles both `search.cpp` and `sort.cpp` because the main program depends on sorting functions.

---

## Features

- **Sorting Algorithms**:
  - Bubble Sort
  - Selection Sort
  - Insertion Sort
- **Searching Algorithms**:
  - Linear Search
  - Binary Search (array is sorted before search)
- **Combined Menu-Driven Interface**
- **Header File Reuse**

---

## Best Practices Followed

- Clean function definitions
- Code modularization via `.h` file
- Professional naming and formatting
- Terminal-based compile instructions

---

## Sample Output

```
Main Menu:
1. Sorting Menu
2. Searching Menu
3. Exit

Enter your option: 1

Sorting Menu:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Back

Choose a sorting algorithm: 1
Enter the number of elements: 5
Enter the elements: 40 10 20 50 30

The array is:
[10, 20, 30, 40, 50]
```
---
## Author Info

- Name: R Samritha Shree   
- Registration No: 24011101097
- Lab: 02 – Data Structures Lab (C++)
- University: Shiv Nadar University Chennai 
