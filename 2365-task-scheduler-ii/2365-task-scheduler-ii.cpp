class Solution {
public:
//     unordered_map<long,long>mp;
//     long long solve(int i ,vector<int>&nums,int k)
//     {
        
//         if(i==nums.size() || k<=-1)
//             return 0;
             
//             long long  take,skip;
//                 if(nums[i] == nums[i+1])
//                 take = solve(i+1,nums,k);
            
//             long long skip = solve(i,nums,k-1);
        
        
//          return min(take,take)+1;
        
        
        
//     }
    long long taskSchedulerII(vector<int>& nums, int k) {
        
        long long ans = 0;
        unordered_map<long long,long long>mp;
        for(int i  = 0;i<nums.size();i++)
        {
                 if(mp.find(nums[i])!= mp.end())
                    ans = max(ans,mp[nums[i]]);
                    ans++;
            mp[nums[i]] =  ans+k;
            
        }
        
        
        return ans;
    }
};