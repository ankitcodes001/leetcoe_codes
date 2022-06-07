class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
    
        int ans = 0;
        int n = arr.size();
         vector<int>prefix(n);
        prefix [0] = arr[0];
        for(int i = 1;i<arr.size();i++)
            prefix[i] = max(prefix[i-1],arr[i]);
        
        for(int i = 0;i<arr.size();i++)
        {
            if(i == prefix[i])
                ans++;
        }
        return ans;
        
    }
};