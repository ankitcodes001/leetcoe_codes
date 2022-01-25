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
    ListNode* deleteMiddle(ListNode* head) {
        
        int len =1;
        if(head == NULL || head->next == NULL) return nullptr;
        
        ListNode* temp = head;
        while(temp->next!= NULL)
        {
            temp = temp->next;
            len++;
        }
        temp = head;
        
        for(int i = 1;i<len/2 && temp->next!= NULL;i++)
        {
            temp= temp->next;
        }
        
        ListNode* curr = temp->next;
        temp->next = curr->next;
        
        delete(curr);
        
        
        
        
     return head;
    }
};