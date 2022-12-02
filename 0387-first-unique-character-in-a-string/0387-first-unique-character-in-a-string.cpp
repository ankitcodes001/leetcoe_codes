class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int>mp1;
        int n = s.length();
        
        for(int i=0; i<n;i++)
        {
            
            mp1[s[i]]++;
        }
        
         
        
                
   
        
    for(int i= 0;i<n;i++)
        
       
            if(mp1[s[i]]==1)
                return i;
        
        
        return -1;
        
        
    
    }
};