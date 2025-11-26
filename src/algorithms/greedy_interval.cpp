#include "greedy_interval.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Interval {
    int start, end;
};

bool compareByEnd(const Interval& a, const Interval& b) {
    return a.end < b.end;
}

void runGreedyIntervalDemo() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<Interval> intervals(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter start and end of interval " << i+1 << ": ";
        cin >> intervals[i].start >> intervals[i].end;
    }

    sort(intervals.begin(), intervals.end(), compareByEnd);

    vector<Interval> selected;
    int lastEnd = -1;

    for (const auto& interval : intervals) {
        if (interval.start >= lastEnd) {
            selected.push_back(interval);
            lastEnd = interval.end;
        }
    }

    cout << "\nSelected non-overlapping intervals:\n";
    for (const auto& interval : selected) {
        cout << "[" << interval.start << ", " << interval.end << "]\n";
    }

    cout << "Maximum number of non-overlapping intervals: " << selected.size() << endl;
}