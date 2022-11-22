class Solution {
public:
    bool dfs(int node,vector<bool>&vis,vector<bool>&rec,vector<int>adj[])
    {
        vis[node] = true;
        rec[node] = true;
        for(auto x: adj[node])
        {
            if(vis[x] == false)
            {
                if(dfs(x,vis,rec,adj))
                    return true;
            }
            else if(rec[x])
                return true;
        }
        rec[node] = false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>&edge) {
    vector<int>adj[n+1];
    for(auto x:edge)
    {
        adj[x[0]].push_back(x[1]);
        
    }
    bool flag = false;
    vector<bool>vis(n+1,false);
    vector<bool>rec(n+1,false);
    for(int i = 0;i<n;i++)
    {
        if(vis[i] == false)
        {
            if(dfs(i,vis,rec,adj))
            {
                flag = true;
                break;
            }
        }
    }
    if(flag)
        return false;
    return true;
    }
};