class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int ans  = 0;
        for(int i  = 0;i<s.size();i++)
        {  bool flag = false;
            for(int j = 0;j<s.size()-1;j++)
            {
                if(s[j] == '0' && s[j+1] == '1')
                {
                    flag = true;
                    
                    swap(s[j],s[j+1]);
                    j++;
                }
            }
         if(flag)
         ans++;
        }
        
        
        return ans;
    }
};