/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>v;
    int fun(TreeNode* root)
    {
        if(root == NULL)
            return  0;
        
        int l = fun(root->left);
        
        
        int r = fun(root->right);
        
        v.push_back(root->val+l+r);
        
       return l+r+root->val;         
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
     fun(root);   
     unordered_map<int,int>mp;
     int maxi = INT_MIN;
     for(auto x : v)
     {
         mp[x]++;
     }
     for(auto x:mp)
     {
         maxi = max(x.second,maxi);
     }
     vector<int>ans;
     for(auto x:mp)
     {
         if(x.second == maxi)
         {
             ans.push_back(x.first);
         }
     }
        
     sort(ans.begin(),ans.end());   
     return ans;   
        
    }
};