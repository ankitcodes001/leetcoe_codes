//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int n, vector<vector<int>> adj[])
    {
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
      pq.push({0,0});
      vector<bool>vis(n,false);
      int mincost = 0;
      while(pq.size()>0)
      {
         auto t = pq.top();
         pq.pop();
         
         int cost = t.first;
         int node = t.second;
         if(vis[node]) continue;
         mincost+=cost;
         vis[node] = true;
         
         for(auto x:adj[node])
         {   int ncost = x[1];
             int nnode = x[0];
             if(vis[nnode] == false)
             {
                 pq.push({ncost,nnode});
             }
         }
         
      }
      
      return mincost;
      
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends