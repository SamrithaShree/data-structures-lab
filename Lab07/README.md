# Lab 07 – Queue ADT and String Operations using C++

## Problem Statement

**Part A**  
Write a C++ menu-driven program to implement **Queue ADT using an integer array** with a maximum size of 5. Ensure proper queue overflow and underflow checks. The program should support the following operations:

- Enqueue  
- Dequeue  
- Display  
- Exit

---

**Part B**  
Write a C++ menu-driven program to implement **Queue ADT using a Singly Linked List (SLL)**. Use dynamic memory allocation for queue operations. The program should support the following operations:

- Enqueue  
- Dequeue  
- Display  
- Exit

---

**Part C**  
Write a C++ program to check whether a string is a **Palindrome** using Queue ADT. The program should:

- Accept a string from the user  
- Use a queue-based approach to check if it reads the same forwards and backwards  
- Display appropriate result

---

**Part D**  
Write a C++ program to **reverse a string using Queue ADT**. The program should:

- Accept a string from the user  
- Reverse it using queue logic (front and rear manipulation)  
- Display the reversed string

---

## File Structure

| File Name               | Description                                         |
|-------------------------|-----------------------------------------------------|
| `queue_array.cpp`       | Implements Queue ADT using integer array            |
| `queue_linkedlist.cpp`  | Implements Queue ADT using singly linked list       |
| `palindrome_queue.cpp`  | Checks if input string is a palindrome using queue  |
| `reverse_string_queue.cpp` | Reverses a string using queue logic              |
| `queue.h`               | Header file with SLL-based queue class (Part B)     |

---

## How to Compile and Run

### ➤ Part A: Queue using Array

```bash
g++ -o queue_array queue_array.cpp
./queue_array
```

### ➤ Part B: Queue using Singly Linked List

```bash
g++ -o queue_linkedlist queue_linkedlist.cpp
./queue_linkedlist
```

### ➤ Part C: Palindrome Checker using Queue

```bash
g++ -o palindrome_queue palindrome_queue.cpp
./palindrome_queue
```

### ➤ Part D: String Reversal using Queue

```bash
g++ -o reverse_string_queue reverse_string_queue.cpp
./reverse_string_queue
```

---

## Features

- **Part A**:  
  - Array-based queue with front and rear tracking  
  - Overflow and underflow checks  
  - Fixed queue size: 5 elements  

- **Part B**:  
  - Singly Linked List implementation of queue  
  - Dynamic memory usage  
  - Displays queue in `data -> data -> NULL` format  

- **Part C**:  
  - Converts string into queue  
  - Compares front and rear characters  
  - Outputs whether string is a palindrome  

- **Part D**:  
  - Enqueues characters and reverses using queue logic  
  - Uses additional logic to simulate reversal  
  - Displays reversed string  

---

## Best Practices Followed

- Menu-driven programs for user interaction  
- Proper memory allocation and deallocation  
- Encapsulated logic using classes and modular functions  
- Input validation and edge case handling  

---

## Sample Output

### Part A: Queue using Array

```
Queue using Array (Size: 5)

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter element to enqueue: 10
Enqueued: 10

Enter choice: 1
Enter element to enqueue: 20
Enqueued: 20

Enter choice: 3
Queue: 10 20

Enter choice: 2
Dequeued: 10
```

---

### Part B: Queue using Singly Linked List

```
Queue using Linked List

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter choice: 1
Enter data: 15
Enqueued: 15

Enter choice: 1
Enter data: 25
Enqueued: 25

Enter choice: 3
Queue: 15 -> 25 -> NULL

Enter choice: 2
Dequeued: 15
```

---

### Part C: Palindrome Checker using Queue

```
Enter a string: madam
The string is a palindrome.

Enter a string: hello
The string is not a palindrome.
```

---

### Part D: String Reversal using Queue

```
Enter a string: OpenAI
Reversed string: IAnepO
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 07 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai  
