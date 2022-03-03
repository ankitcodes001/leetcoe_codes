class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       // approach
       // we make a 1d dp array and we store number of subarray ending with ith position 
       // for ex-
        // 1 2 3 4
      //dp 0 0 1 2  ans = 3
        //  1 2 3 4 5 6
     //dp   0 0 1 2 3 4 ans = 10
        
        int n = nums.size();
        vector<int>dp(n,0);
        
        
        for(int i =2;i<n;i++)
        {
            if(nums[i]-nums[i-1] ==  nums[i-1]-nums[i-2])
            
                dp[i]=dp[i-1]+1;
        }
        int ans =0;
        for(int i =0;i<n;i++)
        {
            ans+=dp[i];
        }
        
        return ans;
        
    }
};