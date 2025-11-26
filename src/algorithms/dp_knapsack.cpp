#include<bits/stdc++.h>
using namespace std;
#include "dp_knapsack.h"


void printKnapsackTable(const vector<vector<int>>& dp, int n, int W) {
    cout << "\nDP Table:\n";
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            cout << setw(4) << dp[i][w] << " ";
        }
        cout << endl;
    }
}


int knapsack_Tabu(int n, int maxWeight, vector<int> &weights, vector<int> &values){
    vector<vector<int>> dp(n,vector<int>(maxWeight + 1,0));
    for(int w=weights[0];w<=maxWeight;w++){
        dp[0][w] = values[0];
    }

    for(int index=1;index<n;index++){
        for(int wt=0;wt<=maxWeight;wt++){
            int notTake = 0 + dp[index-1][wt];
            int take = INT_MIN;
            if(weights[index] <= wt){
                take = values[index] + dp[index-1][wt - weights[index]];
            }
            dp[index][wt] = max(take,notTake);
        }
    }
    printKnapsackTable(dp, n, maxWeight);
    return dp[n-1][maxWeight];

}  

void runKnapsackDemo() {
    int n, maxW;
    cout << "Enter number of items: ";
    cin >> n;
    vector<int> weights(n), values(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the weight and value of item " << i+1 << ": ";
        cin >> weights[i] >> values[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> maxW;

    int result = knapsack_Tabu(n,maxW,weights, values);
    cout << "\nMaximum value achievable: " << result << endl;
}
