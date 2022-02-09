class Solution {
public:
    
    int dp[50004][2];
    
    int find(vector<int>&a,int i,int bought,int fee)
    {
        if(i>=a.size())
            return 0;
        if(dp[i][bought]!= -1)
            return dp[i][bought];
        
        
        // ignoring or do nothing
        
        int ignore = find(a,i+1,bought,fee);
        
        // buy
        
        int val;
        
        if(bought)
            val = (a[i]-fee)+find(a,i+1,false,fee);
        else
            val = -a[i]+find(a,i+1,true,fee);
            
            
        
        return dp[i][bought] = max(val,ignore);
        
        
        
        
    }
    
    
    int maxProfit(vector<int>& a, int fee) {
        // recursive with memo
        
        memset(dp,-1,sizeof(dp));
        
        return find(a,0,0,fee);
      
        
    }
};