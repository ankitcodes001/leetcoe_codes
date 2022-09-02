class Solution {
public:
    bool static comp(vector<int>&a,vector<int>&b)
    {
        if(a[0] == b[0]) return a[1]<b[1];
        
        return a[0]>b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
     // intuition
//      1. heigh of people should be decreasing with lesser count
//      2.sort on the basis of height but with same height lesser value will come before greater
//      3.push the pair at it's desired poosition which will be begin()+val;
     sort(people.begin(),people.end(),comp);
     int n  = people.size();
     vector<vector<int>>ans;
     for(auto i:people)
     {
         ans.insert(ans.begin()+i[1],i);
     }
     return ans;   
        
    }
};