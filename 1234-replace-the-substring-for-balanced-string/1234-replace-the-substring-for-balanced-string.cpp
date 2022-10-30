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
     unordered_map<char,int> mp;
        for(auto &c:s){
            mp[c]++;
        }
        int n=s.length();
        int limit=n/4;
        int ans=n;
        if(is_bal(mp,limit))return 0;
        int i=0,j=0;
        while(i<n){
            mp[s[i]]--;   //checking inside window j-i
            if(is_bal(mp,limit)){
                while(j<=i && is_bal(mp,limit)){
                    ans=min(ans,i-j+1);    
                    mp[s[j]]++;  //when we drop j off window, we should
                    //increase the count which was decreased earlier
                    j++; 
                }
            }
            i++;
        }
        return ans;
    }
};
    