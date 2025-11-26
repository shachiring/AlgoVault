#include <iostream>
using namespace std;

#include "algorithms/dp_knapsack.h"
#include "algorithms/dp_lcs.h"
#include "algorithms/greedy_interval.h"
#include "algorithms/graph_traversal.h"

int main() {
    int choice;
    do {
        cout << "\n--- AlgoVault ---\n";
        cout << "1. Run Knapsack (DP)\n";
        cout << "2. Run LCS (DP)\n";
        cout << "3. Run Interval Scheduling (Greedy)\n";
        cout << "4. Run BFS (Graph)\n";
        cout << "5. Benchmark Algorithms\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";

        
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        
        switch (choice) {
            case 1:
                cout << "Running Knapsack (DP)...\n";
                runKnapsackDemo();  
                break;

            case 2:
                cout << "Running LCS (DP)...\n";
                runLCSDemo();
                break;

            case 3:
                cout << "Running Interval Scheduling (Greedy)...\n";
                runGreedyIntervalDemo();
                break;

            case 4:
                cout << "Running BFS (Graph)...\n";
                runGraphTraversalDemo();
                break;

            case 5:
                cout << "Benchmarking algorithms...\n";
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
