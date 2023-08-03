//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void topologicalSort(int v, vector<vector<pair<int, int>>> &adj, vector<bool> &visited, stack<int> &Stack) {
            visited[v] = true;
            for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
                int u = (*i).first;
                if (!visited[u])
                    topologicalSort(u, adj, visited, Stack);
            }
            Stack.push(v);
        }
  
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        // Create an adjacency list to store the graph
            vector<vector<pair<int, int>>> adj(N);
            for (int i = 0; i < M; i++) {
                int u = edges[i][0]; // The source vertex of the edge
                int v = edges[i][1]; // The destination vertex of the edge
                int w = edges[i][2]; // The weight or distance of the edge
                adj[u].push_back({v, w}); // Add the edge to the adjacency list
            }
        
            stack<int> Stack;
            vector<bool> visited(N, false);
        
            for (int i = 0; i < N; i++)
                if (visited[i] == false)
                    topologicalSort(i, adj, visited, Stack);
        
            vector<int> dist(N, INT_MAX);
            dist[0] = 0;
        
            while (Stack.empty() == false) {
                int node = Stack.top();
                Stack.pop();
        
                if (dist[node] != INT_MAX) {
                    for (auto it : adj[node]){
                        int v = it.first;
                        int wt = it.second;
                        if (dist[v] > dist[node] + wt )
                            dist[v] = dist[node] + wt;
                    }
                }
            }
        
            for (int i = 0; i < N; i++)
                if(dist[i] == INT_MAX)
                    dist[i] = -1;
        
            return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
