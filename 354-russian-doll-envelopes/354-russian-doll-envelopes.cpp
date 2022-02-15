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
        vector<int>h;
        for(int i =0;i<n;i++)
        {
            h.push_back(e[i][1]);
        }
        
        
        
        vector<int>dp;
        for(int i =0;i<n;i++)
        {
            auto it = lower_bound(dp.begin(),dp.end(),h[i]);
            if(it == dp.end())
            {
                dp.push_back(h[i]);
            }
            else
                *it = h[i];
        }
        
        return dp.size();
        
        // complexity
       // time  = o(nlogn +nlogn) == o(nlogn)
        //space = o(n+n) = o(n)
        
    }
};