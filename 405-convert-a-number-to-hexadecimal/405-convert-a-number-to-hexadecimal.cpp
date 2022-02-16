class Solution {
public:
    string toHex(int n1) {
       
       if(n1== 0)
       {
           return "0";    
       }
        
      unsigned int num = n1;
       string ans = "";
       while(num!=0)
       { 
           char letter;
           int temp = num%16;
           num/=16;
           
           if(temp<10)
           {
               ans+= (temp+'0');
           }
           else
           ans+= ('a'+(temp%10));    
           
           
       }
       
        reverse(ans.begin(),ans.end());
       return ans;
        
        
        
    }
};