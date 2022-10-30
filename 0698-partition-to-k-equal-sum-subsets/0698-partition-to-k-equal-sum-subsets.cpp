class Solution {
public:
   bool solve(vector<int>&a,vector<bool>&vis,int idx,int curr,int tar,int k)
   {
       if(k == 1)
           return true;
       if(idx>=a.size())
           return false;
       if(curr == tar)
       {
           if(solve(a,vis,0,0,tar,k-1))
               return true;
       }
       
       for(int i = idx;i<a.size();i++)
       {
           if(vis[i]==false && curr+a[i]<=tar)
           {
               vis[i] = true;
               if(solve(a,vis,i+1,curr+a[i],tar,k))
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
        
        return solve(nums,vis,0,0,sum/k,k);
    }
};