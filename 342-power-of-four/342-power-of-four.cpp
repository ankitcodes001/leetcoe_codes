class Solution {
public:
    bool isPowerOfFour(int n) {
     
     if(n <= 0)
         return false;
     if(n == 1)
         return  true;
        
     if(n & n-1) return false;
        
     int c = 0;
        
     //long long mask = 1;
     
     while(!(1& n))
     {
          c++;
         n = n>>1;
     }
     if(c%2 == 0)
         return true;
      return false;  
    
    }
};