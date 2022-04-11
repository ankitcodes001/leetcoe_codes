class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        int mx = INT_MIN;
        
        for(int i =0;i<candies.size();i++)
        {
            mx = max(candies[i],mx);
        }
        
        int l =1,r = mx;
        int ans  = 0;
        
        while(l<=r)
        {
            long long mid = (l+r)/2;
            long long  sum = 0;
            for(int i =0;i<candies.size();i++)
            {
                sum+= (candies[i]/mid);
                
            }
            if(sum>=k)
            {
                ans  = mid;
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
            
          
        }
        
        
        return ans;
    }
    
};