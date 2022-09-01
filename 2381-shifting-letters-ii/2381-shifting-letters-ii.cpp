class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shift) {
    int n = s.size();
    vector<int>line(n+1,0);
    for(auto i:shift)
    {
        if(i[2])
        {
            line[i[0]]++;
            line[i[1]+1]--;
        }
        else
        {
            line[i[0]]--;
            line[i[1]+1]++;
        }
    }
        
    for(int i = 1;i<=n;i++)
    {
        line[i]+=line[i-1];
    }
        
    for(int i = 0;i<s.size();i++)
    {
        int inc = (s[i]-'a'+line[i])%26;
        if(inc < 0)
        {
            inc+=26;
        }
        char x = (char)(inc+'a'); 
        s[i]= x;

    }
  
        
   return s;        
    }
};