class Solution {
public:
    vector<int> countBits(int n) {
        
      vector<int>dp;
       for(int i =0;i<=n;i++)
       {
           
           long long mask = 1L<<31;
            int c= 0;
           int num =i;
           
           while(mask)
           {
               if(mask & num)
                   c++;
               
               mask = mask>>1;
               
           }
           
           dp.push_back(c);
           
       }
        
        return dp;
        
        
    }
};