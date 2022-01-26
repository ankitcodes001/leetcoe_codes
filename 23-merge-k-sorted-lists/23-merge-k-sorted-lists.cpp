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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& nums) {
        
        if(nums.empty())
            return NULL;
        vector<int>v;
        for(auto temp : nums)
        {    
            while(temp!=NULL)
            {
                v.push_back(temp->val);
                temp =temp->next;
                
                
            }    
        }
        
        sort(v.begin(),v.end());
        
        ListNode*ptr = new ListNode(0);
        ListNode*h = ptr;
        int i =0;
        while(i<v.size())
       
        {
            h->next = new ListNode(v[i++]);
            h = h->next;
           
            
        }
        
        return ptr->next;
    }
};