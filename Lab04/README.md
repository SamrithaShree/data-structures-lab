# Lab 04 – Linked List ADT in C++

## Overview

This lab contains two parts focused on implementing List ADTs using **singly linked lists** in C++. The code follows modular design and good coding practices, with clear separation of logic.

---

## 🔹 Part A: Menu-Driven Singly Linked List

### File: `main.cpp`

Implements a **List ADT using singly linked list** with the following operations:

### Operations:
1. Insert at Beginning  
2. Insert at End  
3. Insert at Position  
4. Delete from Beginning  
5. Delete from End  
6. Delete from Position  
7. Search Element  
8. Display List  
9. Display in Reverse (does not modify the list)  
10. Reverse the Linked List (modifies the list)  
11. Exit  

### Time Complexities:
| Operation           | Time Complexity |
|---------------------|-----------------|
| Insert Beginning    | O(1)            |
| Insert End          | O(n)            |
| Insert Position     | O(n)            |
| Delete Beginning    | O(1)            |
| Delete End          | O(n)            |
| Delete Position     | O(n)            |
| Search              | O(n)            |
| Display             | O(n)            |
| Display Reverse     | O(n) (recursive)|
| Reverse Link        | O(n)            |

---

## 🔹 Part B: Sorted Merge of Two Linked Lists

### Files:
- `linkedlist2.h` – Header file containing `LinkedList` class with ascending insert and merge logic.
- `main2.cpp` – Menu-driven main program using the header file.

### Operations:
1. Insert into List1 (in ascending order)  
2. Insert into List2 (in ascending order)  
3. Merge List1 and List2 into List3 (sorted merge)  
4. Display all Lists  
5. Exit  

### Time Complexities:
| Operation        | Time Complexity |
|------------------|-----------------|
| Insert Ascending | O(n)            |
| Merge Lists      | O(n + m)        |
| Display          | O(n)            |

### Design Details:
- **insertAscending()** inserts a node maintaining sorted order.
- **mergeSorted()** is a static method that merges two sorted lists into a third, also sorted.
- Uses `gethead()` as a private helper function to return internal list head safely.

---

## 💡 Compilation & Run Instructions

### Compile Part A:
```bash
g++ main.cpp -o listA
./listA