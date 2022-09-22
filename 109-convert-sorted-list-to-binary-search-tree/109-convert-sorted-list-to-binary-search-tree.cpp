/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* solve(vector<int>&a,int left,int right)
    {
        if(left > right)
            return nullptr;
        int mid = left+(right-left)/2;
        TreeNode*temp = new TreeNode(a[mid]);
        temp->left = solve(a,left,mid-1);
        temp->right = solve(a,mid+1,right);
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
    vector<int>a;
    while(head)
    {
        a.push_back(head->val);
        head = head->next;
    }
    int n = a.size();    
    return solve(a,0,n-1);    
        
    }
};