class Solution {
public:
    
    string  fun(int n ,int k)
    {  long long temp;
        if(k&1)
            temp = k/2;
        else
            temp = k/2-1;
     
     long long pal = (long long )pow(10,temp);
     pal+=n-1;
      string res = to_string(pal);
     if(k&1)
         pal/=10;
     
    
     
     
     while(pal)
     {
         res+= to_string(pal%10);
         pal/=10;
         
     }
     
        
        
        return res;    
    }
    
    
    vector<long long> kthPalindrome(vector<int>& q, int k) {
        
        vector<long long>ans;
        for(int i =0;i<q.size();i++)
        {
            
            string s = fun(q[i],k);
            if(s.size() == k)
            {
                ans.push_back(stol(s));
            }
            else
            {
                ans.push_back(-1);
            }
            
        }
        
        return ans;
        
        
    }
};