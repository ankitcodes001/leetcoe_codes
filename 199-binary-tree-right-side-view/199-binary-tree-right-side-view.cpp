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
   
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>dq;
        if(root == NULL)
        {
         return {};   
        }
        dq.push(root);
        while(dq.size()>0)
        {
            int n = dq.size();
            for(int i = 1;i<=n;i++)
            {
                TreeNode* ans = dq.front();
                dq.pop();
                if(i==n)
                {
                    v.push_back(ans->val);
                }
                if(ans->left!= NULL)
                {
                    dq.push(ans->left);
                }
                if(ans->right!= NULL)
                {
                    dq.push(ans->right);
                }
            }
        
            
        }
        
        return v;
        
        
        
    }
};