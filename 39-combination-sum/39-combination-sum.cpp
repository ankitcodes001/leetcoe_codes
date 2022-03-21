class Solution {
public:
    
    
    // space  = O(2^n)+O(n)
    // time  = O(2^n)
    vector<vector<int>>v;
    vector<int>temp;
    void fun(vector<int>&a,int t,int i)
    {
        if(t <0 || i == a.size())
        {
            
            return ;
        }
        
        if(t == 0)
        {v.push_back(temp);
        return;
         }
        
        
        
        temp.push_back(a[i]);
        fun(a,t-a[i],i);
        
        temp.pop_back();
        fun(a,t,i+1);
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        //sort(a.begin(),a.end());
        fun(a,t,0);
        return v;
    }
};