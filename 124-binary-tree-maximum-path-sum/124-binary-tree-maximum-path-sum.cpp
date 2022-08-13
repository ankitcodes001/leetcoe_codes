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
   
    
    int solve(TreeNode* root,int &result)
    {
         if(root == NULL)
            return  0;
        
        int lh = solve(root->left,result);
        int rh  = solve(root->right,result);
        
        int max_sum = max(max(lh,rh)+root->val,root->val);
        int ms2_compare = max(max_sum,root->val+lh+rh);
        
        result = max(result,ms2_compare);
        
        return max_sum;
        
    }
    int maxPathSum(TreeNode* root) {
     
        int result = INT_MIN;
        solve(root,result);
        return result;
        
        
    }
};