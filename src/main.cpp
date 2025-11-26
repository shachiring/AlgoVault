#include <iostream>
using namespace std;

#include "algorithms/dp_knapsack.cpp"

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
                break;

            case 3:
                cout << "Running Interval Scheduling (Greedy)...\n";
                break;

            case 4:
                cout << "Running BFS (Graph)...\n";
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
