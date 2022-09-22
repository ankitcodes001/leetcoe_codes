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
        int max_sum_curr_node_in_path =  max(max(lh,rh)+root->val,root->val);
        int max_sum_when_curr_node_is_root = max(max_sum_curr_node_in_path,root->val+rh+lh);
        result = max(result,max_sum_when_curr_node_is_root);
        return max_sum_curr_node_in_path;
        
    }
    int maxPathSum(TreeNode* root) {
     
        int result = INT_MIN;
        solve(root,result);
        return result;
        
        
    }
};