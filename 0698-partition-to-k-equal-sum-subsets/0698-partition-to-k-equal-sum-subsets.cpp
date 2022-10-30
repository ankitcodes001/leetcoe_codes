class Solution {
public:
    
  bool check(vector<int>&nums, vector<bool>&vis,int start,int curr,int target,int k)
  {
      if(k ==  1)
          return true;
      if(start>=nums.size())
          return false;
      if(curr == target)
      {
          if(check(nums,vis,0,0,target,k-1))
              return true;
      }
      
      for(int i = start;i<nums.size();i++)
      {
          if(vis[i]== false && curr+nums[i]<=target)
          {
              vis[i] = true;
              if(check(nums,vis,i+1,curr+nums[i],target,k))
                  return true;
              vis[i] = false;
          }
      }
      
      return false;
  }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        
        int sum = 0;
        for(int i = 0;i<nums.size();i++)
            sum+=nums[i];
       
        if(sum%k!=0)
            return false;
        vector<bool>vis(nums.size(),false);
        
        return check(nums,vis,0,0,sum/k,k);
    }
};