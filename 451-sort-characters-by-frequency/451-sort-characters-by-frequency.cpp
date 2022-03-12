class Solution {
public:
    string frequencySort(string s) {
        
        
        vector<pair<int,char>>v;
       /* int freq[256] = {0};
        
        for(int i =0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
   
        }
        */
    unordered_map<char,int>mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        
        
        for(int i =0;i<s.size();i++)
        {
        v.push_back({mp[s[i]],s[i]});
        }
        
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        
        string temp = "";
        for(auto x : v)
        {
            temp+=x.second;
        }
        return temp;
        
        
        
        
    }
};