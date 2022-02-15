class Solution {
public:
    int numberOfSteps(int num) {
        
        int res =0;
        while(num!=0)
        {
            if(num&1)
            {
                num = num-1;
               
                res++;
            }
            else
            {
                num/=2;
                res++;
            }
            
            
            
        }
        return res;
        
    }
};