class Solution {
public:
    
    int numOfSubarrays(vector<int>& arr) {
     // agar sum odd to    ood ka 1 count aur even count
        // sum even h to odd count 
        
        //kyuki even - odd  == oddd
        // odd - even  = odd;
    int mod = 1e9+7;    
    int n = arr.size();       
    int prefix[n];
    prefix[0] = arr[0];
    int ans = 0;
    for(int i  = 1;i<n;i++)
    {
        prefix[i] = prefix[i-1]+arr[i];
    }
    int even=0,odd = 0;    
    for(int i  = 0;i<n;i++)
    {
        if(prefix[i]%2 == 0)
        {
            ans= (ans+odd)%mod;
            
            even++;
        }
        else
        {
            ans= (ans+1+even)%mod;
            odd++;
        }
    }
        
     return ans%mod;   
    }
};