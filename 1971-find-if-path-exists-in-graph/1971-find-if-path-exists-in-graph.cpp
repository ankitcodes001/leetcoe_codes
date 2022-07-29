class Solution {
public:
    bool validPath(int n, vector<vector<int>>& g, int src, int dest) {
        
//      vector<int>adj[n];
//      vector<int>vis(n,0);
//      queue<int>q;
//      q.push(src);
//      for(int i  = 0;i<edges.size();i++)
//      {
//          adj[edges[i][0]].push_back(edges[i][1]);
//          adj[edges[i][1]].push_back(edges[i][0]);
//      }
//      vis[src] = 1;
//      while(!q.empty())
//      {
//          auto it  = q.front();
//          q.pop();
         
//          if(it == dest)
//              return 1;
         
//          for(int i  = 0;i<adj[it].size();i++)
//          {
//              if(!vis[adj[it][i]])
//              {
//              vis[adj[it][i]] = 1;
//              q.push(vis[adj[it][i]]);
//              }
             
//          }
         
//      }
        
        
//         return 0;
        
        
vector<int>adj[n];
queue<int>q;
vector<int>vis(n,0);
vis[src] = 1;
q.push(src);
for(int i = 0;i<g.size();i++)
{
    adj[g[i][0]].push_back(g[i][1]);
    adj[g[i][1]].push_back(g[i][0]);
}
        
while(q.size()>0)
{
    auto x = q.front();
    q.pop();
    if(x == dest)
        return true;
    for(int i  = 0 ;i<adj[x].size();i++)
    {
        if(!vis[adj[x][i]])
        {
            vis[adj[x][i]] = 1;
            q.push(adj[x][i]);
        }
    }
    
}
        
        
        
        return false;
        
        
    }
};