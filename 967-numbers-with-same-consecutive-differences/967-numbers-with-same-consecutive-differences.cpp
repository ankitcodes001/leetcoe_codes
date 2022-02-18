class Solution {
public:
    
     void fun(vector<int>&res,int digit,int n,int k)
     {
         if(n==0)
         {
             res.push_back(digit);
             return;
         }
            
         int last_digit = digit%10;
         if(last_digit+k<=9)
         {
             digit  = digit*10+k+last_digit;
             fun(res,digit,n-1,k);
             digit/=10;
         }
          if(last_digit-k>=0 && k!=0)
         {
             digit  = digit*10+last_digit-k;
             fun(res,digit,n-1,k);
              digit/=10;
         }
         
         
         
         
         
         /*int last_digit = digit%10;
         
         if(last_digit+k<=9)
         {  
             digit  = digit*10+k+last_digit;
             
             fun(res,digit,n-1,k);
             
            // digit  = digit/10;
         }
         
         if(last_digit - k>=0 && k>0)
         {
             digit = digit*10+last_digit-k;
             fun(res,digit,n-1,k);
             
             //digit  = digit/10;
             
         }
         */
         /*
         for(int i = 0;i<=9;i++)
         {
             int diff = abs((digit%10)-i);
             if(diff == k)
             {
                 digit  = digit*10+i;
                 fun(res,digit,n-1,k);
                 
                 
             }
             
             
         }
         
         
         
         
         
         */
         
         
         
     }
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int>res;
        if(n==1)
        {
            res.push_back(0);
        }
        
        for(int i = 1;i<=9;i++)
        {
            fun(res,i,n-1,k);
            
        }
        
        
        return res;
        
        
    }
};