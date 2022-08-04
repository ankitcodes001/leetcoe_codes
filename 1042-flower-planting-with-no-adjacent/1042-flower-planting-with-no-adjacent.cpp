class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) 
    {
        vector<int>adj[n+1];
        for(auto v : paths)
        {
            adj[v[0]-1].push_back(v[1]-1);
            adj[v[1]-1].push_back(v[0]-1);
        }
        vector<int>res(n);
        for(int i  = 0;i<n;i++)
        {
            bool col[5] = {};
            for(auto j:adj[i])
            {
                col[res[j]] = true;
            }
            
            for(int k = 1;k<=4;k++)
            {
                if(!col[k])
                {
                    res[i] = k;
                }
            }
        
            
        }
        
        return res;
        
    }
};