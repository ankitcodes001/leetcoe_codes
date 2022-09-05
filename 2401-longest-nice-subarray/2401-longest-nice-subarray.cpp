class Solution {
public:
    void bitsmap(vector<int>&bits,int x,int op)
    {
        for(int i  = bits.size()-1;i>=0;i--)
        {
            if(x & (1 <<i))
            {
                bits[i]+=op;
            }
        }
    }
    bool valid(vector<int>&bits)
    {
        for(int i =0;i<bits.size();i++)
        {
            if(bits[i] > 1)
                return false;
        }
        return true;
    }
    int longestNiceSubarray(vector<int>& nums) {
     int n = nums.size();   
     int i  = 0;
     int j  = 0;
        int ans = 0;
     vector<int>bits(32,0);   
        
     while(j < n)
     {
        bitsmap(bits,nums[j],1);
        while(valid(bits) == false)
        {
            bitsmap(bits,nums[i],-1);
            i++;
        }
        ans =  max(ans,j-i+1);
         j++;
     }
     return ans;   
      
    }
};