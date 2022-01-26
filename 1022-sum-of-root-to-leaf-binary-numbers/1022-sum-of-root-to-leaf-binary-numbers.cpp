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
    int sum=0;
    
    int sumRootToLeaf(TreeNode* root,int num =0) {
        if(!root) return 0;
        
        num*=2;
        num+=root->val;
        if(!root->left && !root->right) sum+=num;
        //if(root->left)
            sumRootToLeaf(root->left,num);
        //if(root->right)
            sumRootToLeaf(root->right,num);
        
        return sum;
        
     
        
        
        
        
    }
};