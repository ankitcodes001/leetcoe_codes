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
    
    void find( TreeNode* root ,string s, vector<string> &v)   
    {
         if(!root)
             return;        
        s.push_back(root->val+'a');
        if(root->left  == NULL && root->right == NULL)
        {  reverse(s.begin(),s.end());
            v.push_back(s);
        }        
        find(root->left, s,v);
        find(root->right, s,v);
    }
    
    string smallestFromLeaf(TreeNode* root) {
    vector<string> v;
    find(root,"",v);
       
    sort(v.begin(),v.end());
    
    return v[0];    
    }
};



