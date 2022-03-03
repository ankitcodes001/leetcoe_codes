class Solution {
public:
    int sum=0;
    int fun(vector<int>&a,int i)
    {
        if(i<2)
            return 0;
        int ans =0;
        
        if(a[i] - a[i-1] ==  a[i-1]-a[i-2])
        {
            ans = 1+fun(a,i-1);
            sum+=ans;
        }
        else
        {
             fun(a,i-1);
            
        }
        return ans;
    }

    int numberOfArithmeticSlices(vector<int>& nums) {
       // approach
       // we make a 1d dp array and we store number of subarray ending with ith position 
       // for ex-
        // 1 2 3 4
      //dp 0 0 1 2  ans = 3
        //  1 2 3 4 5 6
     //dp   0 0 1 2 3 4 ans = 10
        int n = nums.size();
        fun(nums,n-1);
        return sum;
        
    }
};