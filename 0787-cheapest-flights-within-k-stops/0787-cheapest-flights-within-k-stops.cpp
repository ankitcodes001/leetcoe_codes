class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    vector<pair<int,int>>adj[n+1];
    for(auto x:flights)
    {
        adj[x[0]].push_back({x[1],x[2]});
    }
    //priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    queue<vector<int>>q;
    q.push({src,0,0});// node,stop,cost
    vector<int>dis(n,1e9);
    dis[src] = 0;
    
    while(q.size()>0)
    {
        auto t = q.front();
        int node = t[0];
        int stop = t[1];
        int cost = t[2];
        
        q.pop();
        
        if(stop>k)
            continue;
        for(auto x:adj[node])
        {
            int ncost = x.second;
            int nnode = x.first;
            
            if(cost+ncost < dis[nnode])
            {
                dis[nnode] = cost+ncost;
                q.push({nnode,stop+1,cost+ncost});
            }
            
        }
    }
    if(dis[dst] == 1e9)
        return -1;
    return dis[dst];
        
        
    }
};