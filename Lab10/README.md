# Lab 10 – Set, Map, and Priority Queue ADT using C++

## Problem Statement

**Part A**  
Write a C++ program that reads a sequence of integers and removes the **minimum number of elements from the beginning** so that the remaining sequence contains only **distinct elements**.  
Use appropriate STL containers to achieve this efficiently.

---

**Part B**  
Three players write `n` words each. Words are scored based on usage:

- **3 points** if used by **only one** player  
- **1 point** if used by **exactly two** players  
- **0 points** if used by **all three** players  

Write a C++ program that:
- Reads words from all three players  
- Calculates each player’s total score using `map` and `set`  
- Displays the score of each player  

---

**Part C**  
Write a C++ menu-driven program to implement a **Priority Queue ADT using Max Heap**. The program should support the following operations:

- Insert  
- Delete Max  
- Display  
- Search  
- Heap Sort  
- Exit  

Use an array-based heap structure. Maintain heap properties during insertions and deletions.

---

## File Structure

| File Name      | Description                                                              |
|----------------|--------------------------------------------------------------------------|
| `lab10_a.cpp`  | Removes minimum prefix to ensure unique suffix using STL (Part A)        |
| `lab10_b.cpp`  | Calculates word scores for 3 players using map and set (Part B)          |
| `lab10_c.cpp`  | Menu-driven max heap implementation for Priority Queue (Part C)          |

---

## How to Compile and Run

### ➤ Part A: Unique Suffix Extraction

```bash
g++ -o lab10_a lab10_a.cpp
./lab10_a
```

### ➤ Part B: Word Scoring Game

```bash
g++ -o lab10_b lab10_b.cpp
./lab10_b
```

### ➤ Part C: Max Heap Priority Queue

```bash
g++ -o lab10_c lab10_c.cpp
./lab10_c
```

---

## Features

- **Part A**:  
  - Efficient check from end to beginning using `unordered_set`  
  - Outputs minimum number of elements to be removed  

- **Part B**:  
  - Uses `map<string, int>` to track word frequency  
  - Calculates individual scores for each player  
  - Robust logic to handle common and unique words  

- **Part C**:  
  - Implements Max Heap using array  
  - Supports Insert, Delete Max, Display, Search, Heap Sort  
  - Menu-driven interface with real-time output updates  

---

## Sample Output

### Part A: Unique Suffix Extraction

```
Enter number of elements: 6
Enter array elements: 1 2 1 3 2 4
Minimum prefix elements to remove: 3
```

---

### Part B: Word Scoring Game

```
Enter number of words per player: 3
Player 1: cat dog fish
Player 2: dog bird fish
Player 3: fish lion cat

Scores:
Player 1: 2
Player 2: 3
Player 3: 2
```

---

### Part C: Max Heap Priority Queue

```
Max Heap Priority Queue

1. Insert
2. Delete Max
3. Display
4. Search
5. Heap Sort
6. Exit

Enter choice: 1
Enter element: 60
Inserted: 60

Enter choice: 1
Enter element: 45
Inserted: 45

Enter choice: 3
Heap: 60 45

Enter choice: 5
Heap Sort: 60 45
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 10 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai