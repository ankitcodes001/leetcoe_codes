class Solution {
public:
  
    string getPermutation(int n, int k) {
        string s = "";
        for(int i = 1;i<=n;i++)
        {
            s+=to_string(i);
        }
        
        int x = 1;
        while(x<k)
        {
            next_permutation(s.begin(),s.end());
            x++;
        }
        
        return s;
    }
};