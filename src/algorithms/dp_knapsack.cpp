#include<bits/stdc++.h>
using namespace std;

void printDPTable(const vector<vector<int>>& dp, int n, int W) {
    cout << "\nDP Table:\n";
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            cout << setw(4) << dp[i][w] << " ";
        }
        cout << endl;
    }
}


int knapsack_SpaceMoreOpti(int n, int maxWeight, vector<int> &weights, vector<int> &values){
    vector<int> prev(maxWeight + 1, 0);
    for(int w=weights[0];w<=maxWeight;w++){
        prev[w] = values[0];
    }

    for(int index=1;index<n;index++){
        for(int wt=maxWeight;wt>=0;wt--){
            int notTake = 0 + prev[wt];
            int take = INT_MIN;
            if(weights[index] <= wt){
                take = values[index] + prev[wt - weights[index]];
            }
            prev[wt] = max(take,notTake);
        }
    }
    return prev[maxWeight];

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

    int result = knapsack_SpaceMoreOpti(n,maxW,weights, values);
    cout << "\nMaximum value achievable: " << result << endl;
}
