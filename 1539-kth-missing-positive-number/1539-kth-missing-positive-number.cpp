class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        /*
          total number of missed elements till ith index = a[i]-i-1;
        */
        
        int low =  0;
        int high = arr.size()-1;
        
        // a[i]-i-1 total missed elements till ith index
        // we can a decision on the basis of this
        // if  k > missed  move right
        //  else move left
        // return  low+k      
        
        while(low <=  high)
        {
            int mid = low+(high -low)/2;
            if(arr[mid]-mid-1 < k) // if  missed element is greater than k
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