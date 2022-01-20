class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
       vector<int>pat_mp(26,0),temp(26,0);
       int k = s1.size();
       for(int i =0;i<s1.size();i++)pat_mp[s1[i]-'a']++;
        
       int i =0,j=0;
       while(j<s2.size())
       {
           temp[s2[j]-'a']++;
           if(j-i+1 < k)j++;
           
           else if(j-i+1 == k)
           {
               if(temp == pat_mp)return true;
               temp[s2[i]-'a']--;
               i++;
               j++;
               
           }
           
           
           
       }
        
        return false;
    }
};