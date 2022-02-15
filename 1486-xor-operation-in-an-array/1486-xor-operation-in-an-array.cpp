class Solution {
public:
    int xorOperation(int n, int start) {
      
        long long ans  =0;
        int  i =0;
        while(n--)
        {
            ans^= (start+2*i);
            i++;
            
            
        }
        return ans;
        
    }
};