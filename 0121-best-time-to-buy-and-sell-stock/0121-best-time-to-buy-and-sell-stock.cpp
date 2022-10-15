class Solution {
public:
    int maxProfit(vector<int>& a) {
      int n = a.size();
      int ans = 0;
      int buy = INT_MAX;
      int max_profit = 0;
      for(int i = 0;i<n;i++)
      {
          buy = min(buy,a[i]);
          int profit = a[i]-buy;
          max_profit = max(profit,max_profit);
      }
        return max_profit;
    }
};