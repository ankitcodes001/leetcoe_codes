class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // time complexity = o(n)
        //space = o(n)
        
        if(nums.size()==0)
            return 0;
        int len = 0;
        int ans = INT_MIN;
        unordered_map<int,bool>mp;
        for(auto it: nums)
        {
            mp[it] = true;
        }
   
        for(auto it: nums)
        {
            if(mp.find(it) == mp.end()) continue;
            int prev = it-1;
            int next = it+1;
            while(mp.find(prev)!= mp.end()) prev--;
            while(mp.find(next)!= mp.end()) next++;
            
            ans = max(ans,next-prev-1);
            mp.erase(it);
        }
        
        return ans;
        
    }
};