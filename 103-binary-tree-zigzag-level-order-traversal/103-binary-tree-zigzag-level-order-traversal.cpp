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
public:vector<vector<int>>ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     
     if(root == NULL) return ans;
     queue<TreeNode*>q;
     q.push(root);
     while(q.size()>0)
     {
         int n = q.size();
         vector<int>temp;
         while(n--)
         {
             TreeNode* root2 = q.front();
             temp.push_back(root2->val);
             q.pop();
             if(root2->left)
                 q.push(root2->left);
             if(root2->right)
                 q.push(root2->right);
         }
         ans.push_back(temp);
     }
     for(int i =0;i<ans.size();i++)
     {
         if(i%2!=0)
         {
             reverse(ans[i].begin(),ans[i].end());
         }
     }
        
        
        return ans;
        
        
        
    }
};