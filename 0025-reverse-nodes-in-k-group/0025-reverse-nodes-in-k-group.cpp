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
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode*curr = head;
        ListNode*prev = NULL;
        ListNode*temp;
        int count = 0;
        while(curr != NULL && count < k)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            count++;
        }
        
        if(temp!=NULL)
        {
            ListNode* later = temp;
            int i = 0;
            while(later && i<k)
            {   i++;
                later = later->next;
            }
            if(i == k)   
            head->next = reverseKGroup(temp,k);
            else
            head->next = temp;
        }
        return prev;
        
    }
};