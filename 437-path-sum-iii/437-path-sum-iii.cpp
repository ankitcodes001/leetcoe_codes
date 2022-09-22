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
    long long dfs(TreeNode* root,long long sum)
    {
        if(root == NULL)return 0;
          long long  ans = 0; 
            if(sum == root->val)
                ans++;
        ans+= dfs(root->left,sum-root->val);
        ans+= dfs(root->right,sum-root->val);
        
        return ans;
    }
    int pathSum(TreeNode* root, int sum) {
        
      if(root == NULL)
          return 0;
      return pathSum(root->left,sum)+pathSum(root->right,sum)+dfs(root,sum);
        
    }
};