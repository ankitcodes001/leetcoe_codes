class Solution {
public:
    void sortColors(vector<int>& a) {
        
        
//         int zero =0;
//         int one =0;
//         int two =0;
        
//         for(int i =0;i<nums.size();i++)
//         {
//             if(nums[i] == 0)
//             {
//                 zero++;
//             }
//             else if(nums[i] == 1)
//             {
//                 one++;
//             }
//             else
//             {
//                 two++;
//             }
//         }

//         int i =0;
//         int j =zero;
//         int k =two;
    
       
//         for(int i =0;i<zero;i++)
//         {
//             nums[i] =0;
//         }
//         for(int i =zero;i<zero+one;i++)
//         {
//             nums[i] =1;
//         }
//         for(int i =one+zero;i<nums.size();i++)
//         {
//             nums[i]=2;
//         }
   
     
        int n = a.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high)
        {
            if(a[mid] == 0)
            {
                swap(a[mid],a[low]);
                mid++;
                low++;
            }
            else if(a[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
            
            
        }
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
};