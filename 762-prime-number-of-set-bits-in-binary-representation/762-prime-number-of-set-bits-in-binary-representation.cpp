class Solution {
public:
    // sieve
    
    bool isPrime(int n)
    {
       int n1 =100;
        vector<bool>p(n1+1,true);
          p[0]= p[1] = false;
        for(int i =2;i*i<=n1;i++)
        {
            if(p[i])
            {   for(int x = i*i;x<=n1;x+=i)
                p[x] = false;
            }
            
            
        }
        
        return p[n];
        
        
    }
    
    int countPrimeSetBits(int left, int right) {
        int ans =0;
        for(int i  =left;i<=right;i++)
        {
            long long mask  = 1L<<31;
            int c =0;
            while(mask)
            {
                if(mask&i)
                    c++;
               mask = mask>>1;
            }
            
            if(isPrime(c))
            {
                ans++;
            }
            
            
        }
        
        return ans;
        
    }
};