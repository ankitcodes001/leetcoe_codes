class Solution {
public:
    string decodeAtIndex(string s, int k) {
       /* 
        string temp = "";
        for(int i =0;i<s.size();i++)
        {   
            
            
             if(isdigit(s[i]))
             {
                 int d = s[i] -'0';
                 for(int j =1;j<d;j++)
                 {
                     temp+=temp;
                 }
                 
             }
            else
                temp+=s[i];
        }
        
        
        string ans = "";
        ans+=temp[k-1];
        return ans;
        
        */
        int n = s.size();
        long long int size = 0;
        for(int i  =0;i<n;i++)
        {
            if(isalpha(s[i]))
                size++;
            else
                size = size*(s[i]-'0');
        }
        string ans = "";
        for(int i = n-1;i>=0;i--)
        {
            k = k%size;
            if(k == 0 && isalpha(s[i]))
            {
             ans+=s[i];
            break;
            }
            if(isdigit(s[i]))
            {
                size = size/(s[i]-'0');
            }
            else
                size--;
         
        }
        
        
        
        
        
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};