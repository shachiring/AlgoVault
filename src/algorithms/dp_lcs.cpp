#include "dp_lcs.h"
#include<bits/stdc++.h>
using namespace std;


void printLCSTable(const vector<vector<int>>& dp, int m, int n) {
    cout << "\nDP Table:\n";
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << setw(3) << dp[i][j] << " ";
        }
        cout << endl;
    }
}


int lcsDP(const string& s1, const string& s2) {
    int m = s1.length(), n = s2.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    printLCSTable(dp, m, n);
    return dp[m][n];
}


void runLCSDemo() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    int result = lcsDP(s1, s2);
    cout << "\nLength of Longest Common Subsequence: " << result << endl;
}