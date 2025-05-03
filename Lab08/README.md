# Lab 08 – STL-Based Optimization & Character Binary Tree in C++

## Problem Statement

### **Part A**  
Write a C++ program using **STL (Standard Template Library)** to compute the **maximum number of blocks** that can be moved to **tower 1**.

**Rules**:
- You can only move blocks from tower `i` to tower `j` if `blocks[i] > blocks[j]`.
- The goal is to **maximize blocks in tower 1** after any number of valid moves.

---

### **Part B**  
Write a menu-driven C++ program to implement **Binary Tree ADT using characters**.

The program should support the following operations:
- Insert a character node to the left or right of an existing node  
- Preorder traversal  
- Inorder traversal  
- Postorder traversal  
- Search for a character  
- Exit  

---

## File Structure

| File Name       | Description                                               |
|----------------|-----------------------------------------------------------|
| `lab8_a.cpp`   | STL-based solution for tower block redistribution         |
| `lab8_b.cpp`   | Menu-driven program for character binary tree operations  |

---

## How to Compile and Run

### ➤ Part A: Tower Block Redistribution

```bash
g++ -o tower lab8_a.cpp
./tower
```
### ➤ Part B: Character Binary Tree

```bash
g++ -o tree lab8_b.cpp
./tree
```
---

## Features

- **Part A**:  
  - Efficient block move logic using STL 
  - Handles multiple test cases  
  - Greedy strategy to maximize tower 1 blocks 

- **Part B**:  
  - Character-based Binary Tree  
  - Left/Right controlled insertions 
  - Traversal operations: Preorder, Inorder, Postorder
  - Node search functionality
  - Menu-driven user interface
  
---
## Best Practices Followed

- Modular design with reusable functions 
- Input validation and edge case handling  
- Use of STL (vectors, algorithms) for optimized performance  
- Dynamic memory handling in tree construction
- Clear and interactive menus for user operations
  
---

## Sample Output

### Part A: Tower Block Redistribution

#### INPUT
```
4
3
1 2 3
3
1 2 2
2
1 1000000000
10
3 8 6 7 4 1 2 4 1 0 1
```

#### OUTPUT
```
3
2
500000001
9
```

---

### Part B: Character Binary Tree

```
Binary Tree Menu

1. Insert
2. Preorder
3. Inorder
4. Postorder
5. Search
6. Exit
Enter choice: 1
Enter character to insert: A
Inserted as root.

Enter choice: 1
Enter character to insert: B
Insert left (L) or right (R) of A: L
Inserted B to the left of A.

Enter choice: 5
Enter character to search: B
Node 'B' found!
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 08 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai  
