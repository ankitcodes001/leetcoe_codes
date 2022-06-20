class Solution {
public:
    int longestSubsequence(string s, int k) {
        
        // as we know 0 does not contribute in incrementing the value of integer so we will be taking all zeroes and 
        // on the basis of sum of integer we will add ones if it is less than k
         // sum+= pow(2,s.size()-1-i)
        int n = s.size();
        cout<<n<<endl;
        int zeros = 0;
        int ones = 0;
        long long int sum = 0;
        zeros = count(begin(s), end(s), '0');
        int pow = 1;
        for(int i = s.size()-1 ; i>=0 && sum+pow<= k;i--)
        {
            if(s[i] == '1')
            {
                    sum+= pow;
                    ones++;
                      
                }
                 pow<<=1;
          
           }   
           
            
        
        
        return zeros+ones;
        
    }
};