
# Lab 11 – Hash ADT using C++

## Problem Statement

**Part A**  
Write a C++ menu-driven program to implement a **Hash Table using Linear Probing** for collision resolution.  
The program should support the following operations:

- Insert  
- Delete  
- Search  
- Display  
- Exit

---

**Part B**  
Write a C++ menu-driven program to implement a **Hash Table using Quadratic Probing** for collision resolution.  
The program should support the following operations:

- Insert  
- Delete  
- Search  
- Display  
- Exit

---

**Part C**  
Write a C++ menu-driven program to implement a **Hash Table using Separate Chaining** for collision resolution.  
The program should support the following operations:

- Insert  
- Delete  
- Search  
- Display  
- Exit  

Use linked lists to handle collisions in each hash index.

---

## File Structure

| File Name      | Description                                                             |
|----------------|-------------------------------------------------------------------------|
| `lab11a.cpp`   | Hash Table implementation using Linear Probing (Part A)                |
| `lab11b.cpp`   | Hash Table implementation using Quadratic Probing (Part B)             |
| `lab11c.cpp`   | Hash Table implementation using Separate Chaining with Linked Lists (Part C) |

---

## How to Compile and Run

### ➤ Part A: Linear Probing

```bash
g++ -o lab11a lab11a.cpp
./lab11a
```

### ➤ Part B: Quadratic Probing

```bash
g++ -o lab11b lab11b.cpp
./lab11b
```

### ➤ Part C: Separate Chaining

```bash
g++ -o lab11c lab11c.cpp
./lab11c
```

---

## Features

- **Part A**:  
  - Fixed-size hash table with `-1` as empty and `-2` as deleted markers  
  - Handles collisions using linear probing with wraparound  
  - Duplicate insertion is avoided and properly notified  

- **Part B**:  
  - Implements quadratic probing with a dynamic probing sequence  
  - Prevents infinite probing loops  
  - Clean insert/search/delete logic  

- **Part C**:  
  - Uses array of linked lists for separate chaining  
  - Dynamic memory allocation for new nodes  
  - Efficient search and deletion within chains  

---

## Sample Output

### Part A: Linear Probing

```
Hash Table using Linear Probing

1. Insert
2. Delete
3. Search
4. Display
5. Exit

Enter choice: 1
Enter key to insert: 25
Inserted 25

Enter choice: 4
Index 0: -1
Index 1: -1
Index 2: -1
Index 3: -1
Index 4: -1
Index 5: 25
...
```

---

### Part B: Quadratic Probing

```
Hash Table using Quadratic Probing

Enter choice: 1
Enter key to insert: 45
Inserted 45

Enter choice: 3
Enter key to search: 45
Found at index 5

Enter choice: 2
Enter key to delete: 45
Deleted 45
```

---

### Part C: Separate Chaining

```
Hash Table using Separate Chaining

Enter choice: 1
Enter key to insert: 21
Inserted 21

Enter choice: 4
Index 1: 21 -> NULL

Enter choice: 2
Enter key to delete: 21
Deleted 21
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 11 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai
