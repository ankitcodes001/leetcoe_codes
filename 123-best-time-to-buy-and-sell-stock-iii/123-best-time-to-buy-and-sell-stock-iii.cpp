class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        
        
        
        int profit1=0,profit2=0,buy1 = INT_MAX, buy2 = INT_MAX;
        
        
        
        for(int i  =0;i<n;i++)
        {   // first profit 
            buy1 = min(buy1,prices[i]);
            profit1 = max(profit1,prices[i]-buy1);
            
            // second profit   
            buy2 = min(buy2,prices[i]-profit1);
            profit2 = max(profit2,prices[i]-buy2);
            
            
            
        }
        return profit2;
        
    }
};