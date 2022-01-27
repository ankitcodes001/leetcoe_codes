class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        
        for(int i =0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        vector<int>res;
        priority_queue<pair<int,int>>q;
        
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            q.push(make_pair(it->second,it->first));
            if(q.size()>(int)mp.size()-k)
            {
                res.push_back(q.top().second);
                q.pop();
                
                
            }
            
            
            
        }
        
        return res;
        
        
        
        
        
    }
};