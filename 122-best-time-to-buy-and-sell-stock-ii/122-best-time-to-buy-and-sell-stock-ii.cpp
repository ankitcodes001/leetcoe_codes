class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // we can simply calculate minimum buy 
        // to get profit = prices[i]-buy
        // we can simply add;
        
        
        int buy = INT_MAX;
        
        int profit =0;
       
        
        for(int i =0;i<prices.size();i++)
        {
            buy = min(buy,prices[i]);
    
            profit+=prices[i]-buy;
            
            buy = prices[i];

            
        }
        
    return  profit;
        
        
        
        
    }
};