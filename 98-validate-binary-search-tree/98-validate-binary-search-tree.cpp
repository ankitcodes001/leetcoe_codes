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
    bool lesser(TreeNode* root,int data)
    {
        if(root == NULL)
            return true;
        if(root->val < data && lesser(root->left,data) && lesser(root->right,data))
            return true;
        return false;
    }
    bool greater(TreeNode* root,int data)
    {
        if(root == NULL)
            return true;
        if(root->val > data && greater(root->left,data) && greater(root->right,data))
            return true;
        return false;
    }
    bool isValidBST(TreeNode* root) {
      if(root == NULL)
          return true;
     if(lesser(root->left,root->val) && greater(root->right,root->val))
     {
         if(isValidBST(root->left) && isValidBST(root->right))
         return true;
     }
     return false;
        
    }
};