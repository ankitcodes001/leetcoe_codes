class Solution {
public:
    string fun(string&s ,int &i)
    {
        // approach
//        # 1. start traversing from left to right
//        # 2. we move the index untile we hit a closing bracket 
//         # 3. if we hit a digit we ll go for the complete number it may be upto 3 digit number
//         # 4. after that we will make a function call and store the string
//         # 5. after that we concatenate this string k times(number) 
//       #6. else we ll add string 
        
//         #time complexity o(nk^2)
        
//         #space complexity  o(n)
        
        
        
        
        string ans = "";
        while(i<s.size() && s[i]!=']')
        {
            if(isdigit(s[i]))
            {
                int k = 0;
                while(i<s.size()&&isdigit(s[i]))
                
                    k = k*10+(s[i++]-'0');
                    i++;// for skipping open bracket
                        
                string temp = fun(s,i);
                while(k--)
                    ans+=temp;
                
                i++;// skipping closing bracket
                
            }
            
            else
                ans+=s[i++];
        }
    
        return ans;
        
        
    }
    
    
    
    string decodeString(string s) {
        int i =0;
        
         return fun(s,i);
        
        
    }
};