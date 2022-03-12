class Solution {
public:
    void sortColors(vector<int>& a) {
        
        /*
        int zero =0;
        int one =0;
        int two =0;
        
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                zero++;
            }
            else if(nums[i] == 1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        
        int j =0;
    for(int i =0;i<n;i++)
    {
        if(zero >0)
        {
        while(zero>0)
        {
            nums[j] = 0;
            zero--;
            j++;
            
        }
        }
        else if(one >0)
        {
        while(one>0)
        {
            nums[] =
        }
        
            
            
        }
    }
     
     */
        int n = a.size();
        
        for(int i =0;i<n-1;i++)
        {
            for(int j = 0;j<n-i-1;j++)
            {
                
                if(a[j] > a[j+1])
                {
                    swap(a[j],a[j+1]);
                }
                
                
            }
            
        }
        
    
        
        
    }
};