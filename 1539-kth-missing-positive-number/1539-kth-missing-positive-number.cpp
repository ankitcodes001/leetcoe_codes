class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        /*
          total number of missed elements till ith index = a[i]-i-1;
        */
        
        int low =  0;
        int high = arr.size()-1;
        while(low <=  high)
        {
            int mid = low+(high -low)/2;
            if(arr[mid]-mid-1 < k)
            {
                low = mid+1;
                
            }
            else
            {
                high = mid-1;
               
            }
        
        }
        
        return low+k;
        
        
    }
};