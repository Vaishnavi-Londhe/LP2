#include <iostream>
using namespace std;

void DFSRecursive(int node, int V, int adj[][100], bool visited[]) {
    visited[node] = true;
    cout << node << " ";

    for(int i = 0; i < V; i++) {
        if(adj[node][i] == 1 && !visited[i]) {
            DFSRecursive(i, V, adj, visited);
        }
    }
}

int main() {
    int ver;
    cout << "Enter the number of vertices: ";
    cin >> ver;

    int edge;
    cout << "Enter the number of edges: ";
    cin >> edge;

    int adj[100][100] = {0};

    cout << "Enter the edges (start vertex and end vertex):" << endl;
    for(int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // Because the graph is undirected
    }

    bool visited[100] = {false};
    cout << "DFS Traversal using Recursion starting from node 0: ";
    DFSRecursive(0, ver, adj, visited);
    cout << endl;

    return 0;
}
