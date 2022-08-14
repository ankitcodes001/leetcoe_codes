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
    int ans = 0;
    pair<int,int> solve(TreeNode* root)
    {
        if(root == nullptr)
            return  {0,0};
              
      auto left_subtree = solve(root->left);
      auto right_subtree = solve(root->right);
      
    int sum = left_subtree.first+right_subtree.first+root->val;
    int n = 1+left_subtree.second+right_subtree.second;    
    if(root->val == sum/n)
    {
        ans++;
    }
    
   return {sum,n};     
    
        
    }
    int averageOfSubtree(TreeNode* root) {
      solve(root); 
     return ans;   
        
        
    }
};