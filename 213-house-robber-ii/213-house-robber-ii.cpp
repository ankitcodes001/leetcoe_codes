class Solution {
public:
    int dp[101];
    
    int solve(vector<int>&a,int i)
    {
      
        if(i<=-1)
             return 0;
             

         if(dp[i] != -1)
             return dp[i];
         int take = a[i]+solve(a,i-2);
         
         int skip = solve(a,i-1);   
         cout<<i<<" "<<skip<<" "<<take<<endl;
         return dp[i] = max(take,skip);
    }
    
    int rob(vector<int>& nums) {
    memset(dp, -1,sizeof(dp));
    int n = nums.size();
        if(nums.size() == 0)
            return 0;
        if(nums.size()== 1)
            return nums[0];
        if(nums.size()== 2)
            return max(nums[0],nums[1]);
    
     vector<int>a,b;
        for(int i=1;i<nums.size();i++)
        {
            a.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            b.push_back(nums[i]);
        }
        
   
        int pp=solve(b,b.size()-1);
            memset(dp, -1,sizeof(dp));

        int qq=solve(a,a.size()-1);
   return max(qq,pp);
        
        
        
        
    }
};