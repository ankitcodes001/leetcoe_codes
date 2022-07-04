class Solution {
public:
    int candy(vector<int>& a) {
        
    // distribute 1 candies to all 
    // add +1 candy to each child having greater rating than from next elemt
   //  do simmilar from right side add max(candi[i],cand[i+1]+1);
   // sum of all candies
        
   vector<int>ans(a.size(), 1);
        
   for(int i = 1;i<a.size();i++)
   {
       if(a[i] > a[i-1])
       {
           ans[i] = ans[i-1]+1; // right side
       }
   }
   for(int i = a.size()-2;i>=0;i--)
   {
       if(a[i] > a[i+1]) // leftside
       {
           ans[i] = max(ans[i],ans[i+1]+1);
       }
   }
   int sum =0;     
   for(auto x : ans)
       sum+=x;
        
   return sum;     
    }
        
        
};