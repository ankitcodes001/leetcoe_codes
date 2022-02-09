class Solution {
public:
    
   
    int maxProfit(vector<int>& a) {
        
        // naive approach
        int old_buy = -a[0];
        int old_sell = 0;
        int old_cool =0;
        
        for(int i = 1;i<a.size();i++)
        {
            int new_buy = max(old_buy,old_cool-a[i]);
            int new_sell = max(old_sell,old_buy+a[i]);
            int new_cool = max(old_cool,old_sell);
            
            
            
            
            old_sell = new_sell;
            old_buy =  new_buy;
            old_cool = new_cool;
            
            
        }
        
        return old_sell;
    }
};