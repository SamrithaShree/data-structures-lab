# Lab 01 – Sorting and Searching using C++

## Problem Statement

**Part 1**  
Write a C++ menu-driven program to sort a given array in ascending order using:
- Bubble Sort
- Selection Sort
- Insertion Sort  
Use functions, validate inputs, and follow coding best practices.

**Part 2**  
Convert the sorting program into a header file. Create a new C++ program that includes:
- Linear Search
- Binary Search  
Use one of the sorting functions to sort before binary search.

---

## File Structure

| File Name     | Description                           |
|---------------|---------------------------------------|
| `sort.cpp`    | Menu-driven sorting program           |
| `sort.h`      | Header file with sorting functions    |
| `search.cpp`  | Menu-driven searching program         |

---

## Input/Output Example

**Sorting Menu Example:**
```
Menu:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Exit

Enter option: 1
Enter number of elements: 5
Enter elements: 5 2 3 1 4
The sorted array is: [1,2,3,4,5]
```

**Searching Menu Example:**
```
Menu:
1. Linear Search
2. Binary Search
3. Exit

Enter option: 2
Enter number of elements: 5
Enter elements: 10 50 30 40 20
Enter target element: 30
The element is found at 2 index
```

---

## How to Compile and Run

Use the terminal (recommended in VS Code):

### ➤ For `sort.cpp`
```bash
g++ -o sort sort.cpp
./sort
```

### ➤ For `search.cpp`
```bash
g++ -o search search.cpp
./search
```

---

## Best Practices Followed

- Modularized code into functions
- Clean input/output formatting
- Boundary condition checks
- Header file usage (`sort.h`)
