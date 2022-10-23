class Solution {
public:
    string largestPalindromic(string num) {
     unordered_map<int,int>mp;
     for(int i = 0;i<num.size();i++)
     {
         mp[num[i]-'0']++;
     }
     
        string front =  "";
        string back =  "";
        for(int i = 9;i>=0;i--)
        {
            if(i == 0 && front.size() == 0)
                continue;
            while(mp[i]>1)
            {
                front+= to_string(i);
                back+= to_string(i);
                mp[i]-=2;
            }
        }
        
        for(int i = 9;i>= 0;i--)
        {
            if(mp[i])
            {
                front+= to_string(i);
                break;
            }
         
        }
        
        reverse(back.begin(),back.end());
        return front+back;
        
    }
};