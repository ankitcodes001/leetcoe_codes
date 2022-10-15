class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int buy = INT_MAX;
        int profit = 0;
        for(int i =  0;i<a.size();i++)
        {
            if(a[i]<buy)
            {
                buy = a[i];
            }
            profit+=a[i]-buy;
            
            buy = a[i];
        }
        
     return profit;   
    }
};