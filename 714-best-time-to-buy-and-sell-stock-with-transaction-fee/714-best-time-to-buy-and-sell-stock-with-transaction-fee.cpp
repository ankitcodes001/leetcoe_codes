class Solution {
public:
    int maxProfit(vector<int>& a, int fee) {
        
        int old_buy = -a[0];
        int old_sell = 0;
        for(int i  =1;i<a.size();i++)
        {
            int new_buy = max(old_sell-a[i],old_buy);
            int new_sell= max((a[i]-fee)+old_buy, old_sell);
            old_buy = new_buy;
            old_sell= new_sell;
        }
        
        
        return old_sell;
        
        
    }
};