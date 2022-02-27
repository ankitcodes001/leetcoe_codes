class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n = strs.size();
       sort(strs.begin(),strs.end());
       string s = strs[n-1];
        string small = strs[0];
     string ans ="";
        for(int i =0;i<small.size();i++)
        {
            if(small[i] == s[i])
            {
                ans+=s[i];
            }
            else
                break;
        }
        
    return ans;
    }
};