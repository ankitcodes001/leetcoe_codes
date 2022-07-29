class Solution {
public:
    // bfs
    vector<vector<int>>ans;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    int n = graph.size();    
    vector<int>adj[n];
    for(int i  = 0;i<n;i++)
    {
        for(auto g : graph[i])
        {
            
            adj[i].push_back(g);
        }
    }
    queue<vector<int>>q;
    q.push({0});
    while(q.size()>0)
    {
        auto  path = q.front();
        q.pop();
        if(path.back() == n-1)
        {
            ans.push_back(path);
        }
        int x = path.back();
        for(int i = 0;i<adj[x].size();i++)
        {
            vector<int>temp = path;
            temp.push_back(adj[x][i]);
            q.push(temp);   
        }
    }
        
    return ans;
        
        
    }
};