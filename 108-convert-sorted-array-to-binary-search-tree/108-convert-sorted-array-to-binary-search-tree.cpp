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
    TreeNode* sortedArrayToBST(vector<int>& v) {
     int n = v.size();
     TreeNode* ans = intoBST(v,0,n-1);
     return ans;
    }
    TreeNode* intoBST(vector<int>&a,int left, int right)
    {  if(left > right)
        return nullptr;
       int mid = left+(right-left)/2;
       TreeNode* temp = new TreeNode(a[mid]);
       temp->left = intoBST(a,left,mid-1);
       temp->right = intoBST(a,mid+1,right); 
       return temp; 
    }  
};