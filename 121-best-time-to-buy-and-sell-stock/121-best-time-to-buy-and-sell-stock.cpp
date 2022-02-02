class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int buy_price = prices[0];
        int sell_price =0;
        for(int i  =1;i<prices.size();i++)
        {
            buy_price = min(prices[i],buy_price);
             sell_price = buy_price;   
         
            
            profit = max(profit , prices[i] - sell_price);
            
            
        }
        return profit;
        
        
    }
};