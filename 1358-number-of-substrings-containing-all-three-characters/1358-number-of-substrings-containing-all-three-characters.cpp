class Solution {
public:
    bool good_substring(vector<int>v)
    {
        return v[0]>=1 && v[1]>=1 && v[2]>=1;
        
    }
    
    int numberOfSubstrings(string s) {
        vector<int>count(3,0);
        int total=0;
        int i=0,j=0;
        int n = s.size();
        while(j<s.size())
        {
            count[s[j]-'a']++;
            if(count.size()<3)
                j++;
            else
            {while(good_substring(count))
                { total+=n-j;
                  count[s[i]-'a']--;
                   i++;
                }
                j++;   
            }
        }
        
        return total;
        
        
    }
};