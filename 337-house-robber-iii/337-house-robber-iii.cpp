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
    // either rob the root
    // do not rob the root;
    unordered_map<TreeNode*,int>mp;
    int rob(TreeNode* root) {
        
       if(root == NULL) return 0;
        if(mp.find(root)!= mp.end())
            return mp[root];
        int take = root->val;
        if(root->left)
        take+= (rob(root->left->left)+(rob(root->left->right)));
        if(root->right)
        take+= (rob(root->right->left)+(rob(root->right->right)));
        
        int skip = (rob(root->left)+rob(root->right));
         mp[root] = max(skip,take);
        return mp[root];
    }
};