class Solution {
public:
    vector<int>dp;
    
//     int bs(int index,vector<vector<int>>&v,int e)
//     {
//         int low = index;
//         int high = v.size()-1;
//         int ans = -1;
        
//         while(low <= high)
//         {
//             int mid = low+(high-low)/2;
//             if(v[mid][0] >= e)
//             { 
//                 ans = mid;
//                 low = mid+1;
//             }
//             else
//                 high = mid-1;
//         }
        
//         return ans;
        
//     }
    
    int solve(int i,vector<vector<int>>&v,vector<int>&s)
    {
        if(i == v.size())
            return 0;
        if(dp[i]!= -1)
            return dp[i];
        
        
        int skip = solve(i+1,v,s);
    
        int end_time = v[i][1];
        int ind = lower_bound(s.begin(),s.end(),end_time) - s.begin();
        
        int take = v[i][2]+solve(ind,v,s);
        return dp[i] = max(skip,take);
        
        
    }
    
    bool static comp(vector<int>&a,vector<int>&b)
    {
        return a[1] > b[1];   
    }
    
    
    
    
    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
      
     vector<vector<int>>v;
     for(int i  = 0;i<s.size();i++)
     {
         v.push_back({s[i],e[i],p[i]});
         
     }
     sort(s.begin(),s.end());
     sort(v.begin(),v.end());
     dp=vector<int>(s.size(),-1);
     return solve(0,v,s);
    }
};