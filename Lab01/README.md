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

| File Name     | Description                                             |
|---------------|---------------------------------------------------------|
| `sort.cpp`    | Contains definitions of sorting algorithms              |
| `sort.h`      | Header file declaring sorting and search functions      |
| `search.cpp`  | Menu-driven program for search (requires `sort.cpp`)    |

---

## How to Compile and Run

Use the terminal (recommended in VS Code):

### ➤ For `sort.cpp` (standalone sorting menu)
```bash
g++ -o sort sort.cpp
./sort
```

### ➤ For `search.cpp` (requires `sort.cpp` to be linked)
```bash
g++ -o search search.cpp sort.cpp
./search
```

---

## Features

- Sorting Algorithms:
  - Bubble Sort
  - Selection Sort
  - Insertion Sort
- Searching Algorithms:
  - Linear Search
  - Binary Search (uses sorting beforehand)
- Header file reuse
- Clean output formatting
- Robust input handling
- C language style I/O using `stdio.h`

---

## Best Practices Followed

- Modularized logic using functions
- Header file used to reuse code between programs
- Input validation and array boundaries considered
- Descriptive variable names
- Professional project structure

---

## Sample Output

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
The array is:
[1, 2, 3, 4, 5]
```

**Search Menu Example:**
```
Menu:
1. Linear Search
2. Binary Search
3. Exit

Enter the option: 2
Enter the number of elements: 6
Enter the elements: 50 10 40 30 20 60
Enter the key to search: 30
Element found at index: 2
```
