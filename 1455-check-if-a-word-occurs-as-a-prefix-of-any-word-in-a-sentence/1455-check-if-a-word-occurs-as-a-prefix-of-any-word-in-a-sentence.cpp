class Solution {
public:
    int isPrefixOfWord(string s, string searh) {
        
        vector<string>v;
        string temp = "";
        for(int i =0;i<s.size();i++)
        {
            temp+=s[i];
            if(s[i] == ' ')
            {
                v.push_back(temp);
                temp = "";
                continue;
            }

        }
        if(temp!="")
            v.push_back(temp);
        
       for(int i = 0;i<v.size();i++)
       {
           string cur = "";
           bool flag = false;
               string p = v[i];
               
            for(int j =0;j<p.size();j++)
            {
                cur+=p[j];
                if(cur == searh)
                    flag = true;
            }
           if(flag)
               return i+1;
       }
        
        return -1;
    }
};