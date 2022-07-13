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
    vector<double> averageOfLevels(TreeNode* root) {
    vector<double>ans;
    if(root == NULL)
        return ans;
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()>0)
    {
        int n = q.size();
        long long sum = 0;
        double x = 0;
        while(n--)
        {
            TreeNode* root2 = q.front();
            sum+=root2->val;
            x+=1;
            q.pop();
            if(root2->left)
                q.push(root2->left);
            if(root2->right)
                q.push(root2->right);
        }
        x = x*(1.0);
        ans.push_back(sum/x);

        
    }
 return ans;
        
    }
};