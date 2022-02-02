class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        // intialize i and j with k // such that we can expand it from there
        // we can expand it to the left and  right while maitainig the bound
        // and we will calculating min
        // ans maximizing our score
        // we can initialize our ans and mini = nums[k];
        int i = k,j=k;
        int ans = nums[i];
         int score = nums[i];
        int n = nums.size();
        while(j<n-1  || i>0)
        {
            if((i>0 ? nums[i-1]:0) < (j<n-1 ? nums[j+1]:0))
            {
                ans  = min(ans,nums[++j]);
            }
            else
            {
                ans  = min(ans,nums[--i]);
            }
            score = max(score,ans*(j-i+1));
            
            
            
            
        }
        return score;
        
    }
};