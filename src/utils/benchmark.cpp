#include "benchmark.h"
#include "../utils/timer.h"
#include "../algorithms/dp_knapsack.h"
#include "../algorithms/dp_lcs.h"
#include "../algorithms/greedy_interval.h"
#include "../algorithms/graph_traversal.h"
#include <iostream>
using namespace std;

void runBenchmarkDemo() {
    Timer timer;
    double timeTaken;

    cout << "\n--- Benchmarking Algorithms ---\n";

    
    cout << "\nBenchmarking Knapsack (DP)...\n";
    timer.start();
    runKnapsackDemo(); // uses user input
    timeTaken = timer.stop();
    cout << "Time taken: " << timeTaken << " ms\n";

    
    cout << "\nBenchmarking LCS (DP)...\n";
    timer.start();
    runLCSDemo();
    timeTaken = timer.stop();
    cout << "Time taken: " << timeTaken << " ms\n";

    
    cout << "\nBenchmarking Interval Scheduling (Greedy)...\n";
    timer.start();
    runGreedyIntervalDemo();
    timeTaken = timer.stop();
    cout << "Time taken: " << timeTaken << " ms\n";

    
    cout << "\nBenchmarking Graph BFS/DFS...\n";
    timer.start();
    runGraphTraversalDemo();
    timeTaken = timer.stop();
    cout << "Time taken: " << timeTaken << " ms\n";
}