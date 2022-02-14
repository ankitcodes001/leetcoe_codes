class Solution {
public:
    int numSteps(string s) {
        
        int n = s.size();
        if(n ==1)
        {
            
            if(s[0] == '0') return 1;
            return 0;
            
            
        }
        
        int res =0;
        int carry =0;
        
       int j  = n-1;
        while(j>=0)
        {
            if(j==0 && carry==0)
            {
                break;
            }
            if(s[j]-'0'^carry)
            {
                res+=2;
                carry =1;
            }
            else
            {
                res++;
            }
            j--;
            
        }
        
        return res;
        
        
        
    }
};