class Solution {
public:
    int maximumXOR(vector<int>& nums) {
    // operation  =   a and (a xor x)
    // this will unset one set bit of a
    // inorder to get maximum xor we if we have 1 in bit we ll keep it 
    // if we have even number of set bit we need to change it to even
    // but if we have o set bit we cannot make it 1
    // in order to get maximum XOR we need to maximize the set bit in final xor;
    // which can obtained by taking OR of all the number;
    
    int ans = 0;
    for(auto x : nums)    
       ans|=x;
    return ans; 
    }
};