class Solution {
public:
    string getSmallestString(int n, int k) {
        
        // build a ans string with all 'a's  of length n
        // traverse the string from right to left
        // maximize the rightmost character
        // remove k-min;
        
        //  time complexity - o(n)
        // space = o(1);
        
        
        string temp(n,'a');
        k-=n;
        int i = n-1;
        while(k>0)
        {
            int t = min(25,k);
            temp[i]+=t;
            k-=t;
            i--;
            
        }
        return temp;
        
    }
};