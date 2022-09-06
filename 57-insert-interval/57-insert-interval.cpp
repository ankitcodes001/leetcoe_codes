class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& new_interval) {
     int n  = interval.size();
     vector<vector<int>>ans;
     vector<int>temp;
     int i = 0;
     while(i<n && new_interval[0] > interval[i][1])
     {
         ans.push_back(interval[i]);
         i++;
     }
     while(i<n && interval[i][0] <= new_interval[1])
     {
         new_interval[0] = min(new_interval[0],interval[i][0]);
         new_interval[1] = max(new_interval[1],interval[i][1]);
         i++;
     }
     ans.push_back(new_interval);
     while(i<n)
     {
         ans.push_back(interval[i]);
         i++;
     }
     return ans;   
    }
};