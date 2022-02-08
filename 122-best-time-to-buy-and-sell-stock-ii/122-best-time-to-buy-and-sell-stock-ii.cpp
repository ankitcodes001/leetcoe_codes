class Solution {
public:
    int maxProfit(vector<int>&a) {
        int n = a.size();
        // we can simply calculate minimum buy 
        // to get profit = prices[i]-buy
        // we can simply add;
        
        int least = INT_MAX;
        int profit=0;
        for(int i =0;i<n;i++)
        {
            least = min(a[i],least);
            
            profit+= (a[i]-least);
            
            least = a[i];
            
            
            
        }
        return profit;
       
    }
};