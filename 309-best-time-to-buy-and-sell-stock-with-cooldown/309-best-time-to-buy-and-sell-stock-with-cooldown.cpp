class Solution {
public:
    
   int dp[5000][3];
    int find(vector<int>&a,int i ,int hold)
    {
        
        if(i>=a.size())
            return 0;
        
         if(dp[i][hold]!= -1)
            return dp[i][hold];
        
         if(hold == 0)
         {
             int buy = find(a,i+1,1)-a[i];
             int not_buy = find(a,i+1,0);
             
         return    dp[i][hold] = max(buy,not_buy);
             
             
         }
        else
        {
            int sell = find(a,i+2,0)+a[i];//   i+2 ==> due to cool down  1 day gap
            int not_sell = find(a,i+1,1);
            
            return dp[i][hold] = max(sell,not_sell);
            
            
            
            
        }
            
            
        
        
        
        
        
    }
    
    
    
    int maxProfit(vector<int>& a) {
        memset(dp,-1,sizeof(dp));
        
        return find(a,0,0);
    }
};