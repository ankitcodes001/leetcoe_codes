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
    pair<bool,int> HB(TreeNode* root)
    {
        if(root == NULL) return {true,0};
        
        auto l = HB(root->left);
        auto r  = HB(root->right);
        
        bool f = l.first && r.first && abs(l.second - r.second)<= 1;
        int h  = max(l.second,r.second)+1;
        
        return {f,h};
        
        
    }
    bool isBalanced(TreeNode* root) {
     auto p = HB(root);
     return p.first;
    }
        
        
        
        
        
        
        
        
        
    
};