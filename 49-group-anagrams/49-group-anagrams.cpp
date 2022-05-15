class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& v) {
        vector<vector<string>>ans;
        
     
        unordered_map<string,vector<string>>mp;
        for(auto i: v)
        {
            string temp = i;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
            
            
        }
        for(auto i: mp)
        {
            ans.push_back(i.second);
        }        
        
        return ans;
        
    }
};