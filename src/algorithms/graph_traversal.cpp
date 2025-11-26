#include "graph_traversal.h"
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) : V(V), adj(V) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);

        cout << "BFS traversal: ";
        while (!q.empty()) {
            int u = q.front(); q.pop();
            cout << u << " ";
            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    void DFS(int start) {
        vector<bool> visited(V, false);
        stack<int> s;
        s.push(start);

        cout << "DFS traversal: ";
        while (!s.empty()) {
            int u = s.top(); s.pop();
            if (!visited[u]) {
                visited[u] = true;
                cout << u << " ";
                for (int v : adj[u]) {
                    if (!visited[v]) {
                        s.push(v);
                    }
                }
            }
        }
        cout << endl;
    }
};

void runGraphTraversalDemo() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    Graph g(V);
    for (int i = 0; i < E; i++) {
        int u, v;
        cout << "Enter edge " << i+1 << " (u v): ";
        cin >> u >> v;
        g.addEdge(u, v);
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    g.BFS(start);
    g.DFS(start);
}