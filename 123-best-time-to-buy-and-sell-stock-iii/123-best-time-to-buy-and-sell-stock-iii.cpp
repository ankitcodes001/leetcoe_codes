class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n = a.size();
        int least = a[0];
        int dpl[n];
        
        dpl[0] =0;
        for(int i =1;i<n;i++)
        {
            least = min(a[i],least);
            dpl[i] = max(dpl[i-1],a[i]-least);   
        }
        int dpr[n];
        dpr[n-1] = 0;
        int maxi = a[n-1];
        for(int i =n-2;i>=0;i--)
        {
            maxi = max(a[i],maxi);
            dpr[i] = max(dpr[i+1],maxi-a[i]);
        }
        
        int ans =INT_MIN;
        for(int i = 0;i<n;i++)
        {
            ans = max(ans,dpl[i]+dpr[i]);
        }
        return ans;
        
        
        
        
    }
};