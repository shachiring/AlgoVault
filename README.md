# AlgoVault 🚀
A modular C++ project showcasing classic algorithms across **Dynamic Programming**, **Greedy**, and **Graph Traversal**, with a built‑in **benchmarking utility** to compare runtime performance.


## ⚙️ Features
- **Dynamic Programming**
  - Knapsack (0/1)
  - Longest Common Subsequence (LCS)
- **Greedy Algorithm**
  - Interval Scheduling
- **Graph Traversal**
  - BFS & DFS
- **Benchmarking Utility**
  - Compare runtime across all modules

---

## ▶️ How to Compile & Run
```bash
# Compile
g++ src/main.cpp \
src/algorithms/dp_knapsack.cpp \
src/algorithms/dp_lcs.cpp \
src/algorithms/greedy_interval.cpp \
src/algorithms/graph_traversal.cpp \
src/utils/benchmark.cpp -o algovault

# Run
./algovault

Knapsack (DP)
Menu Options
--- AlgoVault ---
1. Run Knapsack (DP)
2. Run LCS (DP)
3. Run Interval Scheduling (Greedy)
4. Run BFS/DFS (Graph)
5. Benchmark Algorithms
0. Exit

Knapsack (DP)
Enter number of items: 3
Enter weight and value of item 1: 10 60
Enter weight and value of item 2: 20 100
Enter weight and value of item 3: 30 120
Enter knapsack capacity: 50

Knapsack DP Table:
   0   0   0 ...
   0  60  60 ...
   0  60 100 ...
   0  60 100 160 ...
   0  60 100 160 220 ...

Maximum value achievable: 220



LCS (DP)
Enter first string: abcde
Enter second string: ace

LCS DP Table:
  0 0 0 0
  0 1 1 1
  0 1 1 1
  0 1 2 2
  0 1 2 2
  0 1 2 3

Length of Longest Common Subsequence: 3



Interval Scheduling (Greedy)
Enter number of intervals: 4
Enter start and end of interval 1: 1 3
Enter start and end of interval 2: 2 5
Enter start and end of interval 3: 4 6
Enter start and end of interval 4: 6 7

Selected non-overlapping intervals:
[1, 3]
[4, 6]
[6, 7]
Maximum number of non-overlapping intervals: 3



Graph Traversal (BFS/DFS)
Enter number of vertices: 5
Enter number of edges: 4
Enter edge 1 (u v): 0 1
Enter edge 2 (u v): 0 2
Enter edge 3 (u v): 1 3
Enter edge 4 (u v): 2 4
Enter starting vertex: 0

BFS traversal: 0 1 2 3 4
DFS traversal: 0 2 4 1 3


Benchmarking Utility
--- Benchmarking Algorithms ---
Benchmarking Knapsack (DP)... Time taken: 1.23 ms
Benchmarking LCS (DP)... Time taken: 0.98 ms
Benchmarking Interval Scheduling (Greedy)... Time taken: 0.45 ms
Benchmarking Graph BFS/DFS... Time taken: 1.67 ms