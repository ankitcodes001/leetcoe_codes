class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
     vector<pair<int,int>>v;
     for(int i =0;i<arr.size();i++)
     {
         v.push_back({abs(arr[i]-x),arr[i]});
     }
     sort(v.begin(),v.end());
        vector<int>ans;
        int cnt =0;
     for(auto x:v)
     {   
         
         ans.push_back(x.second);
         cnt++;
         if(cnt == k)
             break;
     }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};