class Solution {
public:
    string getSmallestString(int n, int k) {
        
        // build a ans string with all 'a's  of length n
        // traverse the string from right to left
        // maximize the rightmost character
        // remove k-min;
        
        //  time complexity - o(n)
        // space = o(1);
        
        string s(n,'a');
        // since k is greater or equals to n
        k-=n;
        
        int i = n-1;
        
        while(i>=0)
        {
            int temp = min(25,k);
            s[i]+=temp;
            k-=temp;
            i--;
            
            
        }
        
        return s;
        
        
    }
};