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
    unordered_map<int,int>mp;
    void solve(TreeNode* root)
    {
        if(root == NULL)
            return;
        solve(root->left);
        mp[root->val]++;
        solve(root->right);
        
    }
    bool isUnivalTree(TreeNode* root) {
       if(root == NULL)
           return true;
        solve(root);
       if(mp.size()>1)
           return false;
     return true;
        
    }
};