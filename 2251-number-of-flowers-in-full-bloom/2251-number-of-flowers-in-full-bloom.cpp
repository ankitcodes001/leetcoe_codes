class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& f,vector<int>& p) {
        vector<int>ans;
        vector<int>s;
        vector<int>e;
        for(auto t :f)
        {
            s.push_back(t[0]);
            e.push_back(t[1]);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        
        for(auto x : p)
        {
            int bloom_start = upper_bound(s.begin(),s.end(),x)-s.begin();
            int bloom_end = lower_bound(e.begin(),e.end(),x)-e.begin();
            ans.push_back(bloom_start - bloom_end);
        }
        
        
        return ans;
        
    }
};