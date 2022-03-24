class Solution {
public:
    int brokenCalc(int start, int target) {
     
      int res =0;
        
        while(start<target)
        {
               res++;
            if(target%2 ==0 && start < target)
            {
                target/=2;
            }
            
         
            else
            {
                target+=1;
            }
            
            
        }
        
        res+= (start-target);
        
        return res;
        
        
    }
};