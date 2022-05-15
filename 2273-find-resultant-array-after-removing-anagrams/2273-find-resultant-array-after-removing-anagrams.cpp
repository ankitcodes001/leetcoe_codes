class Solution {
public:
    
    bool isAnagram(string s1,string s2)
    {
        int a = s1.size();
        int b = s2.size();
        
        if(a!=b)return false;
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
  
        for(int i=0;i<a;i++)
        
            if(s1[i]!=s2[i])
                return false;
        
        
        return true;
        
        
    }
    vector<string> removeAnagrams(vector<string>& v) {
        
        for(int i = 1;i<v.size();i++)
        {
            if(isAnagram(v[i],v[i-1]))
            {
                v.erase(v.begin()+i);
                i--;
            }
        }
        
        return v;
    }
};