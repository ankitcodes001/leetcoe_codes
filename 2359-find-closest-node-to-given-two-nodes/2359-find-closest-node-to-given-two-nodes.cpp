class Solution {
public:
    vector<int> bfs(vector<int>adj[],int start,int n)
    {
        queue<int>q;
        q.push(start);
        vector<int>d(n,INT_MAX);
        d[start] = 0;
        
        while(q.size() > 0)
        {
            int node = q.front();
            q.pop();
            
            for(auto x : adj[node])
            {
                if(d[node]+1 < d[x])
                {
                    d[x] = d[node]+1;
                    q.push(x);
                }
            }
        }
        
        return d;
        
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int>adj[n];
        for(int i  = 0;i<edges.size();i++)
        {   if(edges[i]!= -1)
            adj[i].push_back(edges[i]);
        }
       
       
        vector<int>a = bfs(adj,node1,n);
        vector<int>b = bfs(adj,node2,n);
        
        
       int ans  = INT_MAX;
        int node = n;
        for(int i  = 0;i<a.size();i++)
        {
            if(a[i]!=INT_MAX && b[i]!=INT_MAX)
            {
                
                int maxi = max(a[i],b[i]);
                if(ans > maxi)
                {
                    ans = maxi;
                    node = i;
                    
                    
                }
                
            }
            
        }
        
        
        
        return node == n ? -1 : node;
        
    }
};