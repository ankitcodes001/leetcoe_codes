class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dis(n+1,INT_MAX);
        dis[k] = 0;
        for(int i  = 0;i<n;i++)
        {
            for(auto e:times)
            {
                int u = e[0];
                int v = e[1];
                int wt = e[2];
                if(dis[u]!= INT_MAX && dis[v] > dis[u]+wt)
              //  dis[v] =  min(dis[v],dis[u]+wt);
                    dis[v] = dis[u]+wt;
                
            }
            
            
        }
        
        int ans =0;
        for(int i  = 1;i<=n;i++)
        {
            ans = max(ans,dis[i]);
        }
        
        return ans == INT_MAX ? -1:ans;
    }
};