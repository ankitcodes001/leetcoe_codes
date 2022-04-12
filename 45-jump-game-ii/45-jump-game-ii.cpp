class Solution {
public:
    int jump(vector<int>& nums) {
        //greedy ---> o(n)
        // space  =  o(1)
        
        int curr_reach =0;
        int max_reach  =0;
        int step = 0;
        for(int i = 0;i<nums.size()-1;i++)
        {
            max_reach  = max(max_reach,nums[i]+i);
            
            if(curr_reach == i)
            {
                step++;
                curr_reach = max_reach;
            }
        
            
        }
        
        return step;
        
    }
};