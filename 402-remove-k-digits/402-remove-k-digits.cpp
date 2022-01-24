class Solution {
public:
    string removeKdigits(string nums, int k) {
     
        
        //key point  :  we can find minimum possible number from any set of number by arranging them in ascending order
        // in order to get minimum possible value we need to process or delete the pick element from left to right
        // we are trying to get lower weigtage at most significant position
        
        // ex - 3 7 2 1 8 4 , k = 3
         
        //  3 peak(7) 2 1 peak(8) 4 //  delet first peak(7) // 3 2 1 8 4 ,k = 2
        //  peak(3), peak(2),1,peak(8),4 // delete first peak(3) // 2 1 8 4 ,k = 1
        // peak(2),1 peak(8),4 // delet first peak(2)// 1,8 ,4  k ==0;
        // ans = 1 8 4
        
        //
        
        if(nums.size()<= k)
            return "0";
        if(k == 0) return nums;
        
        stack<char>s;
        s.push(nums[0]);
        for(int i =1;i<nums.size();i++)
        { 
            while(k>0 && !s.empty() && s.top() > nums[i])
            {
                s.pop();
                k--;
            }
            s.push(nums[i]);
            if(s.size() == 1 && nums[i] == '0')s.pop();
            
        }
        while(k>0 && !s.empty())
        {
            s.pop();
            k--;
        }
         
        
        
        string ans  = "";
         while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
         }
        reverse(ans.begin(),ans.end());
        
        if(ans.size() == 0) return "0";
        return ans;
    }
};