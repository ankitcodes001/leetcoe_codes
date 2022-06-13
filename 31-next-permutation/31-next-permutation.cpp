class Solution {
public:
    void nextPermutation(vector<int>& a) {
    // traverse from end to start
    // find the num[i] > num[i-1] first greater element from end
    // index1 < 0 reverse    
    // find the index of element which is greater than this element
        // a[i] > a[index]
    //->swap both element and reverse(index+1, last)
    
        
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