class Solution {
public:
    void nextPermutation(vector<int>& a) {
    // traverse from end to start
    // find first decreasing order element from right
    // find element first greater elemet than breakpoint
    //->swap both element and reverse(index+1, last)
    // and since we know that elemet after breakpoint so simply revese;    
    // if(a.size() == 1 || a.size() == 0)
    // {
    //     return;
    // }
        
        
    int index1 = -1;
    for(int i  = a.size()-1;i>0;i--)
    {
        if(a[i] > a[i-1])
        {
            index1 = i-1;
            break;
        }
    }
        
        if(index1 <  0)
        {
            reverse(a.begin(),a.end());
            return;
        }
    
        for(int i  = a.size()-1;i>=0;i--)
        {
        if(a[i] > a[index1])
        {
            swap(a[i],a[index1]);
            reverse(a.begin()+index1+1,a.end());
            break;
        }
       }
        
    
    
    }
};