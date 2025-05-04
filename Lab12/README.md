# Lab 12 – Graph ADT and Graph Algorithms using C++

## Problem Statement

**Part A**  
Write a C++ menu-driven program to implement a **Graph ADT using Adjacency Matrix**.  
The program should support the following operations:

- Create Graph  
- Add Edge  
- Remove Edge  
- Display Adjacency Matrix  

---

**Part B**  
Write a C++ menu-driven program to implement a **Graph ADT using Adjacency List**.  
The program should support the following operations:

- Create Graph  
- Add Edge  
- Remove Edge  
- Display Adjacency List  

---

**Part C**  
Write a C++ menu-driven program to implement the following **Graph Algorithms**:

- **Prim’s Algorithm** (using adjacency matrix) for Minimum Spanning Tree  
- **Kruskal’s Algorithm** (using edge list and union-find) for Minimum Spanning Tree  
- **Dijkstra’s Algorithm** for Single Source Shortest Path  

The program should allow input of graphs and selection of algorithms from a menu.

---

## File Structure

| File Name             | Description                                                               |
|-----------------------|---------------------------------------------------------------------------|
| `graph_matrix.cpp`    | Menu-driven graph using adjacency matrix (Part A)                         |
| `graph_list.cpp`      | Menu-driven graph using adjacency list (Part B)                           |
| `graph_algorithms.cpp`| Menu-driven program for Prim’s, Kruskal’s, and Dijkstra’s algorithms (C)  |

---

## How to Compile and Run

### ➤ Part A: Graph using Adjacency Matrix

```bash
g++ -o matrix graph_matrix.cpp
./matrix
```

### ➤ Part B: Graph using Adjacency List

```bash
g++ -o list graph_list.cpp
./list
```

### ➤ Part C: Graph Algorithms (Prim’s, Kruskal’s, Dijkstra’s)

```bash
g++ -o algorithms graph_algorithms.cpp
./algorithms
```

---

## Features

- **Part A**:  
  - Create and manipulate graph using 2D array (adjacency matrix)  
  - Dynamic edge insertion and deletion  
  - Matrix representation of the graph  

- **Part B**:  
  - Create and manipulate graph using array of linked lists  
  - Efficient memory usage for sparse graphs  
  - Clear adjacency list representation  

- **Part C**:  
  - Implements **Prim’s Algorithm** using adjacency matrix  
  - Implements **Kruskal’s Algorithm** using union-find and edge sorting  
  - Implements **Dijkstra’s Algorithm** using min-distance strategy  
  - Menu-driven structure for selecting algorithms  

---

## Sample Output

### Part A: Adjacency Matrix

```
Graph using Adjacency Matrix
1. Create Graph
2. Add Edge
3. Remove Edge
4. Display Matrix
5. Exit
Enter choice: 1
Enter number of vertices: 4
Graph created successfully.
```

---

### Part B: Adjacency List

```
Graph using Adjacency List
1. Create Graph
2. Add Edge
3. Remove Edge
4. Display List
5. Exit
Enter choice: 4

Adjacency List:
0 -> 1 -> 2
1 -> 0
2 -> 0
```

---

### Part C: Graph Algorithms

```
Graph Algorithms Menu
1. Input Graph (Adjacency Matrix)
2. Prim’s Algorithm
3. Kruskal’s Algorithm
4. Dijkstra’s Algorithm
5. Exit

Enter choice: 2
Prim’s MST:
Edge: 0 - 1, Weight: 2
Edge: 1 - 3, Weight: 1
Edge: 0 - 2, Weight: 4
Minimum Cost: 7
```

---

## Author Info

- Name: R Samritha Shree  
- Registration No: 24011101097  
- Lab: 12 – Data Structures Lab (C++)  
- University: Shiv Nadar University Chennai