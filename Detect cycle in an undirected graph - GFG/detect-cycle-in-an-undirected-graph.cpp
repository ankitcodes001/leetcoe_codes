//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(vector<int>adj[],vector<bool>&vis,int node,int prev)
    {
        vis[node] = true;
        for(auto x:adj[node])
        {
            if(vis[x] == false)
            {
                if(dfs(adj,vis,x,node))
                return true;
            }
            else if(x!=prev)
            return true;
        }
        
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) {
    vector<bool>vis(v+1,false);
    for(int i = 0;i<v;i++)
    {
        if(vis[i] == false)
        {
            if(dfs(adj,vis,i,-1))
            return true;
        }
    }
    return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends