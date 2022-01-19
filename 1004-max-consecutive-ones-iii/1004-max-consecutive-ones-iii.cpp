class Solution {
public:
    int longestOnes(vector<int>& s, int k) {
      int zero=0;
      int ans =INT_MIN;
        
      int i =0,j=0;
      while(j<s.size())
      {
          if(s[j] == 0)zero++;
          while(zero>k)
          {
              if(s[i++]==0)zero--;
          }
    
       ans = max(ans,j-i+1);      
          j++;
      }
        
        
     return ans;  
        }
    
};