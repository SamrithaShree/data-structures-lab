# Lab 09 – STL Applications and Tree ADT using C++

## Problem Statement

**Part A**  
Write a C++ program to simulate a game using an integer array where players are eliminated based on given positions. The program should:

- Accept the number of players `n` and an array of elimination positions  
- Simulate rounds of eliminations based on the given sequence  
- Display the number of winners who remain after all possible eliminations

---

**Part B**  
Write a C++ program to compute the **strength difference** for each participant using STL. The program should:

- Accept strengths of `n` participants  
- For each participant, print the difference between their strength and the **maximum of all other participants**  
- Use efficient STL methods like `max_element`

---

**Part C**  
Write a C++ menu-driven program to implement **Tree ADT using Binary Search Tree (BST)**. The program should support the following operations:

- Insert a node  
- Preorder traversal  
- Inorder traversal  
- Postorder traversal  
- Search for a node  
- Exit

---

**Part D**  
Extend the Tree ADT to **construct an Expression Tree from a postfix expression** using STL Stack. The program should:

- Accept a postfix expression from the user  
- Build an expression tree using stack-based logic  
- Display preorder, inorder, and postorder traversals of the tree  
- Allow repeated operations via a menu

---

## File Structure

| File Name            | Description                                                        |
|----------------------|--------------------------------------------------------------------|
| `lab9_a.cpp`         | Simulates game with elimination rounds and counts number of winners |
| `lab9_b.cpp`         | Calculates strength differences using STL max_element               |
| `lab9_c.cpp`         | Implements BST with insert, traversals, and search operations       |
| `lab9_d.cpp`         | Constructs expression tree from postfix and performs traversals     |
| `lab9_d.h`    | Header file containing the expression tree node structure and logic used in Part D |

---

## How to Compile and Run

### ➤ Part A: Number of Winners

```bash
g++ -o lab9_a lab9_a.cpp
./lab9_a
```

### ➤ Part B: Strength Difference using STL

```bash
g++ -o lab9_b lab9_b.cpp
./lab9_b
```

### ➤ Part C: Binary Search Tree (BST)

```bash
g++ -o lab9_c lab9_c.cpp
./lab9_c
```

### ➤ Part D: Expression Tree from Postfix

```bash
g++ -o lab9_d lab9_d.cpp
./lab9_d
```

---

## Features

- **Part A**:  
  - Simulates player eliminations using logic-based approach
  - Handles dynamic termination based on elimination success  
  - Accurate count of winners after all rounds

- **Part B**:  
  - Uses max_element from STL to find max efficiently  
  - Handles edge case when participant has maximum strength
  - Time-efficient comparison across strengths

- **Part C**:  
  - Dynamic BST with insert, search, and recursive traversals
  - Uses class structure for modularity
  - Clean input-output and user interaction

- **Part D**:  
  - Stack-based expression tree construction  
  - Supports full postfix parsing 
  - Shows all three tree traversals (preorder, inorder, postorder)
  - Built using STL stack for reliability and performance

---

## Best Practices Followed

- Proper use of STL for simplification and performance 
- Dynamic memory management in tree structures 
- Modular class-based design for trees  
- Menu-driven interfaces for user interaction
-  Edge case handling in all programs 

---

## Sample Output

### Part A: Number of Winners

```
Enter number of players: 6
Enter number of elimination positions: 3
Enter elimination positions: 3 5 6
Number of winners: 2
```

---

### Part B: Strength Difference using STL

```
Enter number of participants: 4
Enter strengths: 10 20 30 40

Output:
30
20
10
10
```

---

### Part C: Binary Search Tree (BST)

```
Binary Search Tree Menu
1. Insert
2. Preorder
3. Inorder
4. Postorder
5. Search
6. Exit

Enter choice: 1
Enter value: 50
Inserted: 50

Enter choice: 1
Enter value: 30
Inserted: 30

Enter choice: 3
Inorder: 30 50
```

---

### Part D: Expression Tree from Postfix

```
Enter postfix expression: ab+cde+**
Expression Tree Created!

1. Preorder
2. Inorder
3. Postorder
4. Exit
Enter choice: 2
Inorder: ((a+b)*(c*(d+e)))
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 09 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai  
