# Lab 03 – List ADT using Array

## Problem Statement

Write a C++ **menu-driven** program to implement the **List ADT** using an **array of size 5**. The program should maintain proper boundary checks and good coding practices. Operations supported:

1. Insert Beginning  
2. Insert End  
3. Insert at Position  
4. Delete Beginning  
5. Delete End  
6. Delete at Position  
7. Search  
8. Display  
9. Rotate (right-rotate the array by k times)  
10. Exit

---

## File Structure

| File Name     | Description                                   |
|---------------|-----------------------------------------------|
| `list.cpp` | Contains the class-based implementation of List ADT with all menu options |

---

## How to Compile and Run

```bash
g++ -o lab03 list.cpp
./lab03
```

---

## Features

- List ADT using fixed-size array  
- All insertion and deletion operations  
- Linear search support  
- Right rotation using efficient in-place method  
- Menu-driven interface  
- Modular class structure with encapsulated methods  

---

## Sample Output

```
MENU:
1. Insertion at Beginning
2. Insertion at end
3. Insertion at Position
4. Deletion at Beginning
5. Deletion at end
6. Deletion at Position
7. Search
8. Display
9. Rotate
10. Exit

Enter your option: 9
Enter the value of k to which the array is rotated: 2
The list elements: 4 5 1 2 3
```

---

## Author Info

- Name: R Samritha Shree   
- Registration No: 24011101097
- Lab: 03 – Data Structures Lab (C++)
- University: Shiv Nadar University Chennai 