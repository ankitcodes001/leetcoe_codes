class Solution {
public:
        
    bool canFinish(int n, vector<vector<int>>& p) {
      vector<int>adj[n];
       for(auto x : p)
       {
           adj[x[0]].push_back(x[1]);
       }
       queue<int>q;
       vector<int>indegree(n+1,0);
       for(int i = 0;i<n;i++)
       {
           for(int j = 0;j<adj[i].size();j++)
           {
               indegree[adj[i][j]]++;
           }
       }
       
      for(int i  = 0;i<n;i++)
      {
          if(indegree[i] == 0)
              q.push(i);
      }
        
    vector<int>ans;
        
     cout<<q.size()<<endl;   
     while(q.size() > 0)
     {
         int x = q.front();
         q.pop();
         cout<<x<<" " ;
         ans.push_back(x);
         for(int i = 0;i<adj[x].size();i++)
         {
             indegree[adj[x][i]]--;
             if(indegree[adj[x][i]] == 0)
                 q.push(adj[x][i]);
         }
     }
        
     if(ans.size() == n)
         return true;
        return false;
        
        
    }
};