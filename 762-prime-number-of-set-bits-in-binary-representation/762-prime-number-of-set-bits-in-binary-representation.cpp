class Solution {
public:
    
    bool isPrime(int n)
    {
         if( n==2 || n==3 || n== 7 ||n==11||n==13||n==17||n==19 || n==5 || n==23|| n== 29)
           return true;
        return false;
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