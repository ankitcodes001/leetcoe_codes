class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& q) {
        
     int n = s.size();
     vector<int>left(n,0);
     vector<int>right(n,0);
      vector<int>prefix(n,0);
     int l_close = -1;
     int  r_close = n;
        //int res = 0;
     
     int sum = 0;
     for(int i=0;i<n;i++)
     {
         
         if(s[i] == '|')
         {
            l_close = i;
         }
         left[i] = l_close;
         if(s[i] == '*')
            sum++;
         prefix[i] = sum;
         
   }
      for(int i=n-1;i>=0;i--)
     {
         
         if(s[i] == '|')
         {
            r_close = i;
         }
         right[i] = r_close;
         
     }
        
    vector<int>res;    
    for(auto  x : q)    
    {
        int start = right[x[0]];
        int end = left[x[1]];
        
        int ans  = start < end ? prefix[end]-prefix[start]:0;
        res.push_back(ans);
         
    }      
        
    return res;
        
        
    }
};