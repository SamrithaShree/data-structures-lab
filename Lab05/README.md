# Lab 05 – Advanced Linked List Operations using C++

## Problem Statement

**Part A**  
Write a C++ menu-driven program to implement List ADT using a **doubly linked list with a tail**. Ensure proper boundary conditions and follow good coding practices. The program should support the following operations:

- Insert at Beginning  
- Insert at End  
- Insert at Position  
- Delete from Beginning  
- Delete from End  
- Delete from Position  
- Search  
- Display  
- Exit

---

**Part B**  
Write a C++ menu-driven program to implement List ADT using a **circular linked list**. Ensure proper boundary conditions and follow good coding practices. The program should support the following operations:

- Insert at Beginning  
- Insert at End  
- Insert at Position  
- Delete from Beginning  
- Delete from End  
- Delete from Position  
- Search  
- Display  
- Exit

---

**Part C**  
An operating system allocates a fixed CPU time slot for each process using the **Round-Robin Scheduling Algorithm**. The fixed time slot should be initialized before the menu-driven program begins. Use a circular linked list to implement the process queue. The program should support:

- Insert Process (Enter time required for process)  
- Execute (Simulate Round-Robin logic)  
- Exit

**Execution Rule:**  
If process time > time slot, subtract and push to end. If ≤ 0, remove it.

---

## File Structure

| File Name     | Description                                                |
|---------------|------------------------------------------------------------|
| `dll.cpp`     | Implements Doubly Linked List ADT with tail                |
| `cll.cpp`     | Implements Circular Linked List ADT                        |
| `rr.cpp`      | Implements Round-Robin Scheduling using Circular List      |
| `rr.h`        | Header file for round-robin related functions              |

---

## How to Compile and Run

### ➤ Part A: Doubly Linked List

```bash
g++ -o dll dll.cpp
./dll
```

### ➤ Part B: Circular Linked List

```bash
g++ -o cll cll.cpp
./cll
```

### ➤ Part C: Round-Robin Scheduling

```bash
g++ -o rr rr.cpp
./rr
```

---

## Features

- **Part A**:  
  - Doubly linked list with tail pointer  
  - Position-based insertion & deletion  
  - Display and search functionality  

- **Part B**:  
  - Circular singly linked list  
  - Comprehensive menu with boundary checks  

- **Part C**:  
  - Round-robin simulation with dynamic circular queue  
  - Process re-queuing based on remaining time  
  - Modular header-based implementation  

---

## Best Practices Followed

- Modular code with clear logic  
- Menu-driven interfaces for user interactivity  
- Proper boundary checks and validation  
- Separation of concerns using header files  

---

## Sample Output

### Part A: Doubly Linked List with Tail

```
Menu:
1. Insert Beginning
2. Insert End
3. Insert Position
4. Delete Beginning
5. Delete End
6. Delete Position
7. Search
8. Display
9. Exit

Enter your choice: 1
Enter value to insert at beginning: 10

Enter your choice: 2
Enter value to insert at end: 30

Enter your choice: 3
Enter position: 2
Enter value: 20

Enter your choice: 8
List: 10 <-> 20 <-> 30

Enter your choice: 5
Deleted node from end.

Enter your choice: 8
List: 10 <-> 20

Enter your choice: 7
Enter value to search: 20
Element found at position 2

Enter your choice: 9
Exiting...
```

### Part B: Circular Linked List

```
Menu:
1. Insert Beginning
2. Insert End
3. Insert Position
4. Delete Beginning
5. Delete End
6. Delete Position
7. Search
8. Display
9. Exit

Enter your choice: 1
Enter value: 5

Enter your choice: 2
Enter value: 15

Enter your choice: 3
Enter position: 2
Enter value: 10

Enter your choice: 8
List: 5 -> 10 -> 15 -> (back to head)

Enter your choice: 6
Enter position to delete: 2
Deleted node at position 2

Enter your choice: 8
List: 5 -> 15 -> (back to head)

Enter your choice: 9
Exiting...
```

### Part C: Round Robin Scheduling

```
Enter time slot: 5

Main Menu:
1. Insert Process
2. Execute
3. Exit
Enter your option: 1
Enter process time: 12
Process inserted.

Enter your option: 1
Enter process time: 7
Process inserted.

Enter your option: 2
Executing process of time 12
Remaining time 7 -> sent to end of queue
Executing process of time 7
Remaining time 2 -> sent to end of queue
Executing process of time 7
Remaining time 2 -> sent to end of queue
Executing process of time 2
Process completed!
Executing process of time 2
Process completed!
Queue is now empty.
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 05 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai  
