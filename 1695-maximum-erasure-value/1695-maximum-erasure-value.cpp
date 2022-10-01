class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
     
    unordered_map<int,int>mp;
    int i = 0;
    int j = 0;
    int ans = INT_MIN;
    int sum = 0;
    int n = nums.size();
    while(j<n)
    { 
        mp[nums[j]]++;
        sum+=nums[j];
        if(mp.size() == j-i+1)
        {
          ans = max(sum,ans);
           j++;
        }
        else if(mp.size() < j-i+1)
        { 
            while(mp.size() < j-i+1)
            {   mp[nums[i]]--;
                sum-=nums[i];
                if(mp[nums[i]] == 0)
                    mp.erase(nums[i]);
             i++;
            }
            if(mp.size() == j-i+1)
            {
                ans = max(ans,sum);
                j++;
            }
        
        }
        
    }
return ans;
        
    }
};