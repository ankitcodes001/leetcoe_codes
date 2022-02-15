class Solution {
public:
    
    bool static comp(vector<int>&a,vector<int>&b)
    {
        
        return a[0]==b[0]?a[1]>b[1]:a[0]<b[0];
        
    }
    int maxEnvelopes(vector<vector<int>>& e) {
     
        //approach
        // sort on height    
        
       
        
        //sorting the width
        sort(e.begin(),e.end(),comp);
        
        // Lis on height
        int n = e.size();
        
        
        
        vector<int>dp;
        for(int i =0;i<n;i++)
        {
            auto it = lower_bound(dp.begin(),dp.end(),e[i][1]);
            if(it == dp.end())
            {
                dp.push_back(e[i][1]);
            }
            else
                *it = e[i][1];
        }
        
        return dp.size();
        
        // complexity
       // time  = o(nlogn +nlogn) == o(nlogn)
        
        
    }
};