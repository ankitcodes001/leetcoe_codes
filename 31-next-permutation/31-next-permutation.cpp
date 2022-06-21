class Solution {
public:
    void nextPermutation(vector<int>& a) {
    // traverse from end to start
    // find first decreasing order element from right
    // find element first greater elemet than breakpoint
    //->swap both element and reverse(index+1, last)
    // and since we know that elemet after breakpoint so simply revese;    
    if(a.size() == 1 || a.size() == 0)
    {
        return;
    }
        
        
    int breakpoint  = -1;
    for(int i = a.size()-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            breakpoint  = i-1;
            break;
        }
    }
        
        if(breakpoint <  0)
        {
            reverse(a.begin(),a.end());
            return;
        }
        
        
    
    for(int i = a.size()-1;i>=0;i--)
    {
        if(a[i]>a[breakpoint])
        {
            swap(a[i],a[breakpoint]);
            reverse(a.begin()+breakpoint+1,a.end());
            break;
        }
    }
    
    
    }
};