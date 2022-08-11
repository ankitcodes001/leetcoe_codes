class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& nums) {
        
      int n   = nums.size();
      vector<int>ans;
      vector<int>temp;
      for(int i  = 0;i<n;i++)
      {
          
          int index = upper_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
          ans.push_back(index+1);
          if(index == temp.size())
          {
              temp.push_back(nums[i]);
          }
          else
              temp[index] = nums[i];
          
      }
        return ans;
    }
};