class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int least = INT_MAX;
        int profit =0;
        int ans=0;
        for(int i =0;i<prices.size();i++)
        {
           least = min(prices[i],least);
           profit  = prices[i]-least;
           ans = max(ans,profit);  
            
            
        }
        
        return ans;
    }
};