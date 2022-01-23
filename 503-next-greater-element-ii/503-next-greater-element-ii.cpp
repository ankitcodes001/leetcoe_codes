class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>nge(n,-1);
        stack<int>st;
        
        // for circular array index would be i%n
        // and i would be going till 2*n
        
        for(int i =0;i<2*n-1;i++)
        {
          while(!st.empty()&& nums[i%n] > nums[st.top()])
            {
                nge[st.top()] = nums[i%n];
              
                st.pop();
                
            }
            
            
            st.push(i%n);  
        }
        return nge;
        
    }
};