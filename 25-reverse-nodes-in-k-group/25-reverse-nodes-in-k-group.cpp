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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp2 = head;
        for(int i =0;i<k;i++)
        {
            
            if(temp2 == NULL)
                return head;
            temp2 = temp2->next;
            
            
        }
        
       ListNode* temp;
       ListNode*prev = NULL;
       ListNode* curr =head;
        int c =0;
        while(curr!= NULL && c<k)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            c++;
            
            
        }
        
        if(temp!= NULL)
        {
            head->next = reverseKGroup(temp,k);
        }
        
        return prev ;
    }
};