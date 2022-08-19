class Solution {
public:
    
    vector<long long>dp;
    long long solve(int i,vector<vector<int>>&v,vector<int>&s)
    {  if(i == v.size())
        return  0;
        
        if(dp[i]!= -1)
            return dp[i];
      
     long long ind = lower_bound(s.begin(),s.end(),v[i][1])-s.begin();
     long long skip = solve(i+1,v,s);
     long long take = v[i][2] + solve(ind,v,s);
     return dp[i] = max(skip,take);
        
        
    }
    
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
  
    vector<vector<int>>v;
        vector<int>s;
    for(int i  = 0;i<rides.size();i++)
    {
        v.push_back({rides[i][0],rides[i][1], rides[i][1]-rides[i][0]+rides[i][2]});
        s.push_back(rides[i][0]);              
    }
        
   dp = vector<long long>(rides.size(),-1);                   
   sort(v.begin(),v.end());
   sort(s.begin(),s.end());
  return solve(0,v,s);                   
    

        
    }
};