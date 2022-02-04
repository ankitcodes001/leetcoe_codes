class Solution {
public:
    int countSpecialSubsequences(vector<int>& nums) {
        
       long long  dp[3];
       dp[0]=0;
       dp[1]=0;
       dp[2]=0;
       
        long long  mod =1000000007 ;
      for(int i  =0;i<nums.size();i++)
      {
          if(nums[i]==0)
          {
              dp[0]= (2*dp[0]+1)%mod;
              
          }
          else if(nums[i] == 1)
          {
              dp[1] = (2*dp[1]+dp[0])%mod; 
          }
          
          else if(nums[i] == 2)
          {
              dp[2] = (2*dp[2]+dp[1])%mod;
          }
          
          
          
      }
        return (((dp[2]%mod)+mod)%mod);
        
        
    }
};