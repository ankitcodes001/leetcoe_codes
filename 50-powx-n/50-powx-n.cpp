class Solution {
public:
    double myPow(double x, int n) {
        // if(n == 0) return 1
        
        // time complexity = o(n);
        if(n == 0)
            return 1;
        
        double ans = myPow(x,n/2);
        
        if(n%2 == 0)
        {
            return ans*=ans;
        }
            
        
        return n<0?1/x*ans*ans:ans*ans*x;
        
        
        
        
    }
};