class Solution {
public:
    vector<unordered_map<int,int>>dp;
    
    int solve(int i,vector<int>&rods,int d)
    {
        if(i == rods.size())
        {
            if(d == 0)
                return  0;
            return INT_MIN;
        }
        
        if(dp[i].find(d)!= dp[i].end())
            return dp[i][d];
        
        int x = rods[i]+solve(i+1,rods,d+rods[i]);
        int y = solve(i+1,rods,d-rods[i]);
        int z = solve(i+1,rods,d);
        
        return dp[i][d] = max({x,y,z});
        
    }
    int tallestBillboard(vector<int>& rods) {
     dp.assign(21,{});
     return solve(0,rods,0);
        
        
        
    }
};