class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int>v;
        v.push_back(first);
        int x =0;
        for(int i=0;i<n;i++)
        {
           x = encoded[i]^v[i];
            v.push_back(x);
        }
        
        return v;
    }
};