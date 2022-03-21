class Solution {
public:
    vector<int> partitionLabels(string s) {
    
        // store the last occurence of all character
        // calculate maxidistence of occuence of same character as maxi = max(maxi,mp[s[i]])
        // and when maxi matches with the index we can push that length as (maxi-prev)
        // and update our prev = maxi;
        // timecomplexity = o(n)
        // spacecomplexity = o(n)
        
        unordered_map<char,int>mp;
        for(int i =0;i<s.size();i++)
        {
            mp[s[i]] =i;
        }
        
        
        vector<int>v;
        
        int maxi =0;
        int prev = -1;
        for(int i =0;i<s.size();i++)
        {
            maxi = max(maxi,mp[s[i]]);
            if(maxi == i)
            {
                v.push_back(maxi - prev);
                prev = maxi;
            }
            
        }
        
        
        
        
        return v;
    }
    
};