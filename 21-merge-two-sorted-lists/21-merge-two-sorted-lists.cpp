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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
        //time complexity = 0(n)
        // space complexity = o(n)
        
        ListNode*temp = list1;
        ListNode*temp2 = list2;
        vector<int>v;
        while(temp)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        while(temp2)
        {
            v.push_back(temp2->val);
            temp2 = temp2->next;
        }
        sort(v.begin(),v.end());
        
        ListNode*ans = new ListNode();
        ListNode*p = ans;
        
        for(auto x : v)
        {
            ListNode*node = new ListNode(x);
          
            p->next = node;
            p = p->next;
    
        }
        
        
        
        
        
        
        return ans->next;
        
        
        
    
    }
};