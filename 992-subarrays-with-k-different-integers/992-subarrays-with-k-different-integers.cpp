class Solution {
public:
    int solve(vector<int>&nums,int k)
    {
    unordered_map<int,int>mp;
    int i  = 0;
    int j = 0;
    int ans = 0;
    int n = nums.size();
        
    while(j<n)
    {
        mp[nums[j]]++;
        if(mp.size()<=k)
        {
            ans+= j-i+1;
            j++;
        }
        else if(mp.size()>k)
        {
            while(mp.size()>k)
            {
                mp[nums[i]]--;
                if(mp[nums[i]] == 0)
                mp.erase(nums[i]);
                i++;
            }
            if(mp.size()<=k)
            {
                ans+=j-i+1;
                j++;
            }
        }
       
    }
      return ans;  
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
    int t1 = solve(nums,k);
    int t2 = solve(nums,k-1);
    cout<<t2<<" ";
    return t1-t2;
        
    }
};