class Solution {
public:
    bool is_bal(unordered_map<char,int>mp,int k)
    {
        for(auto x:mp)
        {
            if(x.second > k)
                return false;
        }
        return true;
    }
    int balancedString(string s) {
    unordered_map<char,int>mp;
    for(auto c:s)
    {
        mp[c]++;
    }
    int n = s.size();
    int k = n/4;
    int ans = n;
    int i = 0,j=0;
    if(is_bal(mp,k)) return 0;
    while(j<n)
    {
        mp[s[j]]--;
        if(is_bal(mp,k))
        {
            while(i<=j && is_bal(mp,k))
            {   ans = min(ans,j-i+1);
                mp[s[i]]++;
               i++;
            }
            
        }
        j++;
    }

        
        
    return ans;
        
    }
};
    