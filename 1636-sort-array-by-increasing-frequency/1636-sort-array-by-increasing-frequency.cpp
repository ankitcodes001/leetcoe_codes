class Solution {
public:
    bool static comp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second== b.second)
            return a.first > b.first;
        
        return a.second < b.second;
        
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        vector<pair<int,int>>v;
        unordered_map<int,int>mp;
        for(auto c : nums)mp[c]++;
        for(int i =0;i<nums.size();i++)v.push_back({nums[i],mp[nums[i]]});
        sort(v.begin(),v.end(),comp);
        for(auto x:v) ans.push_back(x.first);
        return ans;
            
        
    }
};