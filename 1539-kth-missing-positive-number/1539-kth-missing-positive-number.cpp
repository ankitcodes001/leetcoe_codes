class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        map<int,int>mp;
        for(int i = 0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int count  = 0;
        for(int i = 1;;i++)
        {
            if(mp[i] == 0)
            { 
                count++;
             
            }
            if(count == k)
                return i;
        }
        
        return count;
    }
};