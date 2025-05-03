# Lab 04 – Singly Linked List Operations in C++

## Problem Statement

**Part A**  
Implement a menu-driven program in C++ using a singly linked list to support the following List ADT operations:
- Insert at beginning, end, and after a key
- Delete from beginning, end, and by key
- Search for a value
- Display all elements
- Display in reverse order
- Reverse the entire linked list

**Part B**  
Create a header-based C++ program that manages sorted singly linked lists. It should:
- Maintain ascending order while inserting
- Merge two sorted linked lists
- Display the final merged list

Use appropriate class design and file modularization with a header file and a driver file.

---

## File Structure

| File Name          | Description                                                                 |
|--------------------|-----------------------------------------------------------------------------|
| `linkedlist1.cpp`  | Menu-driven program implementing all List ADT operations using singly linked list |
| `linkedlist2.h`    | Header file containing the definition and declaration of a SortedList class |
| `linkedlist2.cpp`  | Driver file using `linkedlist2.h` to perform sorted insertions and merging  |

---

## How to Compile and Run

### ➤ Run Part A:

```bash
g++ -o lab04a linkedlist1.cpp
./lab04a
```

### ➤ Run Part B:

```bash
g++ -o lab04b linkedlist2.cpp
./lab04b
```

Make sure all files are in the same directory.

---

## Features

### Part A
- Insertion at beginning, end, and after a key
- Deletion from beginning, end, and by key
- Search for an element
- Display list in normal and reverse order
- Full list reversal

### Part B
- Maintain ascending order on insert
- Efficient merging of two sorted lists
- Clean display of merged result

---

## Best Practices Followed

- Clean modular code using `.h` and `.cpp` files
- Proper use of classes and dynamic memory
- Separate logic and interface
- Menu-driven CLI interaction
- Reversal and merge logic handled efficiently

---

## Sample Output (Part A)

```
Menu:
1. Insert at Beginning
2. Insert at End
3. Insert After Key
4. Delete from Beginning
5. Delete from End
6. Delete by Key
7. Search
8. Display
9. Display in Reverse
10. Reverse List
11. Exit

Enter your choice: 1
Enter value to insert: 10

List: 10
```

## Sample Output (Part B)

```
Insert elements in List 1:
10 30 50 

Insert elements in List 2:
20 40 60 

Merged List:
10 20 30 40 50 60
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 04 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai
