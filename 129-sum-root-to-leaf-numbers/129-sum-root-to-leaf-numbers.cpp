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
    int solve(TreeNode* root,int sum)
    {
        if(root == nullptr)
            return 0;
        
        sum = 10*sum+root->val;
        
        if(root->left == NULL && root->right == NULL)
            return sum;
        
        return solve(root->left,sum)+solve(root->right,sum);
        
        
    }
    int sumNumbers(TreeNode* root) {
        
        return solve(root,0);
        
    }
};