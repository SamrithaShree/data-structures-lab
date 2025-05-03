
# Lab 06 – Stack ADT and Expression Evaluation using C++

## Problem Statement

**Part A**  
Write a C++ menu-driven program to implement **Stack ADT using a character array** with a maximum size of 5. Ensure proper stack overflow and underflow checks. The program should support the following operations:

- Push  
- Pop  
- Peek  
- Display  
- Exit

---

**Part B**  
Write a C++ menu-driven program to implement **Stack ADT using a Singly Linked List (SLL)**. Use dynamic memory allocation for stack operations. The program should support the following operations:

- Push  
- Pop  
- Peek  
- Display  
- Exit

---

**Part C**  
Write a C++ program to perform **Infix to Postfix conversion** and **Postfix expression evaluation** using Stack ADT. Implement the stack using singly linked list. The program should:

- Accept a valid infix expression with single-digit operands  
- Convert it to postfix notation  
- Evaluate the postfix expression and display result

---

**Part D**  
Write a C++ program to **check for balanced parentheses** in an expression using Stack ADT. The program should:

- Accept a string containing parentheses: `()`, `{}`, `[]`  
- Use stack operations to check if all opening and closing brackets are matched correctly  
- Display appropriate success or error messages

---

## File Structure

| File Name        | Description                                               |
|------------------|-----------------------------------------------------------|
| `stack_array.cpp`| Implements Stack ADT using character array                |
| `stack_sll.cpp`  | Implements Stack ADT using singly linked list             |
| `infix_postfix.cpp` | Converts infix to postfix and evaluates postfix         |
| `brackets.cpp`   | Checks if an expression has balanced brackets             |

---

## How to Compile and Run

### ➤ Part A: Stack using Array

```bash
g++ -o stack_array stack_array.cpp
./stack_array
```

### ➤ Part B: Stack using Singly Linked List

```bash
g++ -o stack_sll stack_sll.cpp
./stack_sll
```

### ➤ Part C: Infix to Postfix Conversion and Evaluation

```bash
g++ -o infix_postfix infix_postfix.cpp
./infix_postfix
```

### ➤ Part D: Balanced Parentheses Checker

```bash
g++ -o brackets brackets.cpp
./brackets
```

---

## Features

- **Part A**:  
  - Array-based stack with size limit 5  
  - Overflow and underflow detection  
  - User-friendly menu system  

- **Part B**:  
  - Dynamic memory management using SLL  
  - Stack operations with memory-safe deletion  
  - Real-time top tracking and content display  

- **Part C**:  
  - Operator precedence handling  
  - Accurate postfix conversion logic  
  - Correct postfix evaluation using stack  

- **Part D**:  
  - Supports all types of brackets: `()`, `{}`, `[]`  
  - Uses stack to validate proper nesting and closure  
  - Provides precise feedback for mismatched expressions  

---

## Best Practices Followed

- Clean class design and encapsulation  
- Modular functions with single responsibility  
- Input validation and edge case handling  
- Commented code with structured formatting  

---

## Sample Output

### Part A: Stack using Array

```
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter a character to push: A
Pushed: A

Enter your choice: 1
Enter a character to push: B
Pushed: B

Enter your choice: 4
Stack contents (Top to Bottom): B A

Enter your choice: 2
Popped: B

Enter your choice: 3
Top of stack: A
```

---

### Part B: Stack using Singly Linked List

```
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter character to push: X
Pushed: X

Enter your choice: 1
Enter character to push: Y
Pushed: Y

Enter your choice: 4
Stack contents (Top to Bottom): Y X

Enter your choice: 2
Popped: Y

Enter your choice: 3
Top of stack: X
```

---

### Part C: Infix to Postfix and Evaluation

```
Enter infix expression: 2+3*4
Postfix expression: 234*+
Evaluated Result: 14
```

---

### Part D: Balanced Parentheses Checker

```
Enter expression: [(a+b)*{c-d}]
The expression is balanced.

Enter expression: [(a+b]*{c-d}]
The expression is not balanced.
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 06 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai  
